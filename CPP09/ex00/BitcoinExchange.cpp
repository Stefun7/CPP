/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 15:03:34 by scesar            #+#    #+#             */
/*   Updated: 2026/06/11 18:53:21 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, float> csv_parser(std::string file_name){
	std::ifstream data;
	std::map<std::string, float> data_map;
	std::string line;

	data.open(file_name.c_str());
	if (!data.is_open())
		throw(FileWontOpen());
	char sep = NONE;
	getline(data, line);
	// if(line != "date,exchange_rate")
	// 	std::cout << "Let's ignore that" << std::endl;
	while(getline(data, line))
	{
		if(line.empty())
			throw(EmptyLine());
		std::string date = chech_date(line);
		if(date.size() == line.size())
			throw(NoValue());
		size_t here = date.size();
		while(line[here] == ' ')
			here ++;
		if(sep == NONE)
			sep = line[here];
		float value = check_value(line, here, sep);
		data_map[date] = value;
		// std::cout << date << " | " << value << std::endl;
		// exit(1);
	}
	return data_map;
}

std::map<std::string, float> input_parser(std::map<std::string, float> data, std::string file_name){
	//in construction
	std::ifstream input;
	std::map<std::string, float> res;
	std::string line;

	input.open(file_name.c_str());
	if (!input.is_open())
		throw(FileWontOpen());
	char sep = '|';
	getline(input, line);
	// if(line != *date | value")
	// 	std::cout << "Let's ignore that again" << std::endl;


	//next step
	while(getline(input, line))
	{
		if(line.empty())
			throw(EmptyLine());
		std::string date = chech_date(line);
		if(date.size() == line.size())
			throw(NoValue());
		size_t here = date.size();
		while(line[here] == ' ')
			here ++;
		if(sep == NONE)
			sep = line[here];
		float value = check_value(line, here, sep);
		// std::cout << date << " | " << value << std::endl;
		// exit(1);
	}
	return res;
}

std::string chech_date(std::string const &line){
	size_t pos = line.find('-');
	if(pos == std::string::npos)
		throw(WrongDateFormat());

	std::string year = line.substr(0, pos);
	std::string month = line.substr(pos + 1, 2);
	std::string day = line.substr(pos + 4, 2);
	long l_year = atol(year.c_str());
	long l_month = atol(month.c_str());
	long l_day = atol(day.c_str());
	for(size_t i = 0; i < year.size(); i++)
	{
		if(!isdigit(year[i]))
			throw(WrongDateFormat());
	}
	for(size_t i = 0; i < month.size(); i++)
	{
		if(!isdigit(month[i]))
			throw(WrongDateFormat());
	}
	for(size_t i = 0; i < day.size(); i++)
	{
		if(!isdigit(day[i]))
			throw(WrongDateFormat());
	}
	if(!l_year && year != "0")
		throw(WrongDateFormat());

	if(l_year < 2009)
	{
		std::cout << "It wasn't even on the market yet, go educate yourself : https://en.wikipedia.org/wiki/Bitcoin"
		<< std::endl;
		throw(WrongDateFormat()); //or make another function ?
	}

	if(!day_exists(l_year, l_month, l_day))
		throw(WrongDateFormat());
	std::string res = year + "-" + month + "-" + day;
	if(isdigit(line[pos + 6]))
		throw(WrongDateFormat());
	std::cout << res << std::endl;
	return res;
}

bool day_exists(long l_year, long l_month, long l_day){
	if(!l_month || l_month < 1 || l_month > 12)
		return false;
	if(!l_day || l_day < 1 || l_day > 31)
		return false;
	if(l_month == 2)
	{
		if((l_year % 4) != 0 && (l_day > 28))
			return false;
		else if ((l_day > 29))
			return false;
	}
	else if(l_month == 4 || l_month == 6 ||l_month == 9 ||l_month == 11)
	{
		if(l_day > 30)
			return false;
	}
	return true;
}


float check_value(std::string const &line, size_t here, char sep){
	if(isalnum(sep))
		throw(WrongSeparatorFormat());
	if (line[here] != sep)
		throw(WrongSeparatorFormat());
	here++;
	while(line[here] == ' ')
		here ++;
	std::string value = line.substr(here, line.size() - (line.size() - here));
	float l_value = atof(value.c_str());
	for(size_t i = 0; i < value.size(); i++)
	{
		if(!isdigit(value[i]))
		{
			if(!(value[i] == '.' && i == (value.size() - 2)))
				throw(WrongDateFormat());
		}
	}
	if(l_value == 0 && value != "0")
		throw(WrongValueFormat());
	return l_value;
}
