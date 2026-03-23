/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 13:49:49 by stephen           #+#    #+#             */
/*   Updated: 2026/03/18 13:40:12 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool isInt(const std::string &lit){
	char *end;

	std::strtol(lit.c_str(), &end, 10);
	return *end == '\0';
}

bool isDouble(const std::string &lit){
	char *end;

	std::strtod(lit.c_str(), &end);
	return *end == '\0';
}

bool isFloat(const std::string &lit){
	char *end;
	std::string n;

	if (lit[lit.length() - 1] != 'f')
		return false;
	n = lit.substr(0, lit.length() - 1);
	std::strtod(n.c_str(), &end);

	return *end == '\0';
}

void treatInt(std::string lit){
	char *end;
	long n = std::strtol(lit.c_str(), &end, 10);

	if (n < 0 || n > 127)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(n))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(n) << std::endl;
	if(n < INT_MIN || n > INT_MAX)
		std::cout << "int: out of range" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(n) << std::endl;

	std::cout << std::fixed << std::setprecision(1);
	//std::fixed to show decimal number
	//std::setprecision(1) to show 1 digit after the decimal

	std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(n) << std::endl;
}

void treatDouble(std::string lit){
	char *end;
	double n = std::strtod(lit.c_str(), &end);
	long m = static_cast<long>(n);

	if (m < 0 || m > 127 || lit == "nan" || lit == "nanf")
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(m))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(m) << "'\n";
	if (std::isnan(n) || std::isinf(n))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(n) << std::endl;

	std::cout << std::fixed << std::setprecision(1);

	std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
	std::cout << "double: " << n << std::endl;
}

void treatFloat(std::string lit){
	char *end;
	float n = static_cast<float>(std::strtod(lit.c_str(), &end));
	long m = static_cast<long>(n);

	if (m < 0 || m > 127)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(m))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(m) << "'\n";
	if (std::isnan(n) || std::isinf(n))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(n) << std::endl;

	std::cout << std::fixed << std::setprecision(1);

	std::cout << "float: " << n << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(n) << std::endl;
}

void ScalarConverter::convert(std::string lit){

	//isChar ? t treat 'a' type inputs
	if(isInt(lit))
		treatInt(lit);
	else if(isDouble(lit))
		treatDouble(lit);
	else if(isFloat(lit))
		treatFloat(lit);
	else
		std::cout << "Wrong argument format" << std::endl;
}

//large number may not be well represented in float bc float ≈ 7 digits precision
//float 32 bits, double 64 bits