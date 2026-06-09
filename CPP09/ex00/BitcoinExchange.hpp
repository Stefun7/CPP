/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 17:18:02 by scesar            #+#    #+#             */
/*   Updated: 2026/06/09 18:27:43 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <map>
# include <iostream>
# include <fstream>
# include <stdlib.h>
# define INVALID "Invalid date."

class FileWontOpen : public std::exception{
public:
	const char* what() const throw(){
		return "Unable to open file.";
	}
};

class WrongDateFormat : public std::exception{
public:
	const char* what() const throw(){
		return "Invalid date.";
	}
};

class WrongSeparatorFormat : public std::exception{
public:
	const char* what() const throw(){
		return "Invalid separator.";
	}
};

std::map<std::string, float> csv_parser(std::string);
std::string chech_date(std::string const &line);
bool day_exists(long l_year, long l_month, long l_day);
