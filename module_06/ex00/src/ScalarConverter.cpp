/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:12:13 by anguil-l          #+#    #+#             */
/*   Updated: 2025/04/26 18:12:24 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

#include <iostream>
#include <iomanip>
#include <sstream>
#include <cmath>
#include <climits>

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(ScalarConverter const &src) { (void)src; }
ScalarConverter::~ScalarConverter() {}
ScalarConverter &ScalarConverter::operator=(ScalarConverter const &rSym) { (void)rSym; return *this; }

static bool isPseudoLiteral(const std::string &s) {
	return s == "-inff" || s == "+inff" || s == "nanf" ||
		   s == "-inf"  || s == "+inf"  || s == "nan";
}

static bool isCharLiteral(const std::string &s) {
	if (s.length() == 1 && std::isprint(static_cast<unsigned char>(s[0])) && !std::isdigit(s[0])) return true;
	if (s.length() == 3 && s[0] == '\'' && s[s.size() - 1] == '\'' && std::isprint(static_cast<unsigned char>(s[1]))) return true;
	return false;
}

static bool parseToDouble(const std::string &input, double &out) {
	if (input.empty()) return false;
	std::string t = input;
	if ((t[t.size() - 1] == 'f' || t[t.size() - 1] == 'F') && t.size() > 1) t = t.substr(0, t.size() - 1);
	std::istringstream iss(t);
	iss >> out;
	if (iss.fail()) return false;
	char c;
	if (iss >> c) return false;
	return true;
}

void ScalarConverter::convert(std::string input) {
	// 1) char literal
	if (isCharLiteral(input)) {
		char c = (input.length() == 1) ? input[0] : input[1];
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
		return;
	}

	// 2) pseudo-literals
	if (isPseudoLiteral(input)) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;

		if (input == "nanf" || input == "nan") std::cout << "float: nanf" << std::endl;
		else if (input == "+inff" || input == "+inf") std::cout << "float: +inff" << std::endl;
		else std::cout << "float: -inff" << std::endl;

		if (input == "nanf" || input == "nan") std::cout << "double: nan" << std::endl;
		else if (input == "+inff" || input == "+inf") std::cout << "double: +inf" << std::endl;
		else std::cout << "double: -inf" << std::endl;
		return;
	}

	// 3) numeric parse
	double d;
	if (!parseToDouble(input, d)) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return;
	}

	// char
	if (std::isnan(d) || std::isinf(d) || d < 0 || d > 127 || d != static_cast<int>(d))
		std::cout << "char: impossible" << std::endl;
	else {
		char ch = static_cast<char>(static_cast<int>(d));
		if (!std::isprint(static_cast<unsigned char>(ch))) std::cout << "char: Non displayable" << std::endl;
		else std::cout << "char: '" << ch << "'" << std::endl;
	}

	// int
	if (std::isnan(d) || std::isinf(d) || d > INT_MAX || d < INT_MIN || d != static_cast<int>(d))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	// float
	float f = static_cast<float>(d);
	if (std::isnan(f)) std::cout << "float: nanf" << std::endl;
	else if (std::isinf(f)) std::cout << (f > 0 ? "float: +inff" : "float: -inff") << std::endl;
	else std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;

	// double
	if (std::isnan(d)) std::cout << "double: nan" << std::endl;
	else if (std::isinf(d)) std::cout << (d > 0 ? "double: +inf" : "double: -inf") << std::endl;
	else std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

