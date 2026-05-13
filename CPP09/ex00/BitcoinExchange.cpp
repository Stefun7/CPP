/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 15:03:34 by scesar            #+#    #+#             */
/*   Updated: 2026/05/13 15:09:15 by scesar           ###   ########.fr       */
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
		// check_value()
		// check_other() ?
	}
}

//official release of the bc : January 2009
