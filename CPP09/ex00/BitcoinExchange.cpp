/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 15:03:34 by scesar            #+#    #+#             */
/*   Updated: 2026/06/05 11:58:55 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, float> csv_parser(std::string file_name){
	std::ifstream data;
	std::map<std::string, float> data_map;
	std::string line;

	//open file with data.open(file);
	data.open(file_name);
	if (!data.is_open())
		throw(FileWontOpen());
	getline(data, line);
	if(line != "date | value") //check if /n at the end
		std::cout << "Let's ignore that" << std::endl;
	while(getline(data, line))
	{
		// check_date()
		std::string date = chech_date(line);
		if (date == INVALID)
			throw(WrongDateFormat());
		float value;
		// check_value()
		// check_other() ?
	}
}

std::string chech_date(std::string const &line){
	size_t pos = line.find('-');
	if(pos == std::string::npos)
		return INVALID;
	std::string s_year = line.substr(0, pos);
	int year = std::atoi(s_year.c_str());
	if(!year && s_year != "0")
		throw(WrongDateFormat());
	is(year < )
	// int year = std::atoi(line.substr(0, 3).c_str());
	int month = std::atoi(line.substr(5, 6).c_str());
	int day = std::atoi(line.substr(8, 9).c_str());
	int newDate = std::atoi(newDate_str.c_str());
}
//official release of the bc : January 2009

