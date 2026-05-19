/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 14:25:30 by anguil-l         #+#    #+#             */
/*   Updated: 2025/09/26 17:12:08 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const str & dataFile)
{
	_loadData(dataFile);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange & src) :
	_priceMap(src._priceMap)
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange & rhs)
{
	if (this != &rhs)
		_priceMap = rhs._priceMap;
	return *this;
}

str BitcoinExchange::_trim(const str & str)
{
	size_t start = str.find_first_not_of(" \t\n\r");
	if (start == str::npos)
		return "";
	size_t end = str.find_last_not_of(" \t\n\r");
	return str.substr(start, (end - start + 1));
}

bool BitcoinExchange::_isValidDate(const str & date)
{
	if (date.length() != 10)
		return false;
	if (date[4] != '-' || date[7] != '-')
		return false;

	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
			continue;
		if (!isdigit(date[i]))
			return false;
	}

	int year = atoi(date.substr(0, 4).c_str());
	int month = atoi(date.substr(5, 2).c_str());
	int day = atoi(date.substr(8, 2).c_str());

	if (year < 2009 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;

	return true;
}

bool BitcoinExchange::_isValidValue(const str & value, float & outValue)
{
	try
	{
		char * end = 0;
		float val = strtof(value.c_str(), &end);

		if (*end != '\0')
			return false;
		if (val < 0)
			return false;
		if (val > 1000)
			return false;

		outValue = val;
		return true;
	}
	catch (...)
	{
		return false;
	}
}

void BitcoinExchange::_loadData(const str & dataFile)
{
	std::ifstream file(dataFile.c_str());
	if (!file.is_open())
		throw std::runtime_error("Error: could not open data file.");

	str line;
	getline(file, line); // skip header

	while (getline(file, line))
	{
		if (line.empty())
			continue;

		size_t pos = line.find(',');
		if (pos == str::npos)
			continue;

		str date = _trim(line.substr(0, pos));
		str priceStr = _trim(line.substr(pos + 1));

		if (!_isValidDate(date))
			continue;

		float price = atof(priceStr.c_str());
		_priceMap[date] = price;
	}

	file.close();

	if (_priceMap.empty())
		throw std::runtime_error("Error: no valid data loaded.");
}

void BitcoinExchange::_processLine(const str & line)
{
	size_t pos = line.find('|');
	if (pos == str::npos)
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return;
	}

	str dateStr = _trim(line.substr(0, pos));
	str valueStr = _trim(line.substr(pos + 1));

	// Validate date
	if (!_isValidDate(dateStr))
	{
		std::cout << "Error: bad input => " << dateStr << std::endl;
		return;
	}

	// Validate and parse value
	float value = 0.0f;
	if (!_isValidValue(valueStr, value))
	{
		if (valueStr.find('-') != str::npos && valueStr[0] == '-')
			std::cout << "Error: not a positive number." << std::endl;
		else if (atof(valueStr.c_str()) > 1000)
			std::cout << "Error: too large a number." << std::endl;
		else
			std::cout << "Error: bad input => " << valueStr << std::endl;
		return;
	}

	// Find the closest previous date
	std::map<str, float>::iterator it = _priceMap.lower_bound(dateStr);

	if (it == _priceMap.end() || it->first != dateStr)
	{
		if (it == _priceMap.begin())
		{
			std::cout << "Error: bad input => " << dateStr << std::endl;
			return;
		}
		--it;
	}

	float result = value * it->second;
	std::cout << dateStr << " => " << value << " = " << std::fixed << std::setprecision(2) << result << std::endl;
}

void BitcoinExchange::processInput(const str & inputFile)
{
	std::ifstream file(inputFile.c_str());
	if (!file.is_open())
		throw std::runtime_error("Error: could not open file.");

	str line;
	getline(file, line);

	while (getline(file, line))
	{
		if (!line.empty())
			_processLine(line);
	}

	file.close();
}
