/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 17:18:02 by scesar            #+#    #+#             */
/*   Updated: 2026/06/05 11:41:09 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <map>
# include <iostream>
# include <fstream>
# define INVALID "Invalid date"

class FileWontOpen : public std::exception{
public:
	const char* what() const throw(){
		return "Unable to open file";
	}
};

class WrongDateFormat : public std::exception{
public:
	const char* what() const throw(){
		return "Invalid date";
	}
};

std::map<std::string, float> csv_parser(std::string);
