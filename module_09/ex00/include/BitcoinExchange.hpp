/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 14:23:45 by anguil-l         #+#    #+#             */
/*   Updated: 2025/09/26 16:45:12 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
#include <map>
#include <cstdlib>
#include <cmath>
#include <cctype>

typedef std::string str;

class BitcoinExchange
{
	public:
		BitcoinExchange();
		BitcoinExchange(const str & dataFile);
		BitcoinExchange(const BitcoinExchange & src);
		~BitcoinExchange();

		BitcoinExchange & operator=(const BitcoinExchange & rhs);

		void	processInput(const str & inputFile);

	private:
		std::map<str, float>	_priceMap;

		bool	_isValidDate(const str & date);
		bool	_isValidValue(const str & value, float & outValue);
		str		_trim(const str & str);
		void	_loadData(const str & dataFile);
		void	_processLine(const str & line);
};

#endif
// Modified
