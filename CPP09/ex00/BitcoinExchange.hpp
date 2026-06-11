/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 17:18:02 by scesar            #+#    #+#             */
/*   Updated: 2026/06/11 18:51:33 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <map>
# include <iostream>
# include <fstream>
# include <stdlib.h>
# define INVALID "Invalid date."
# define NONE '\0'

class FileWontOpen : public std::exception{
public:
	const char* what() const throw(){
		return "Unable to open file.";
	}
};

class EmptyLine : public std::exception{
public:
	const char* what() const throw(){
		return "Empty line in file.";
	}
};

class NoValue : public std::exception{
public:
	const char* what() const throw(){
		return "No value for a date.";
	}
};

class WrongDateFormat : public std::exception{
public:
	const char* what() const throw(){
		return "Invalid date.";
	}
};

class WrongValueFormat : public std::exception{
public:
	const char* what() const throw(){
		return "Invalid value.";
	}
};

class WrongSeparatorFormat : public std::exception{
public:
	const char* what() const throw(){
		return "Invalid separator.";
	}
};

std::map<std::string, float> csv_parser(std::string data_file);
std::map<std::string, float> input_parser(std::map<std::string, float> data, std::string file_name);
std::string chech_date(std::string const &line);
float check_value(std::string const &line, size_t here, char sep);
bool day_exists(long l_year, long l_month, long l_day);
