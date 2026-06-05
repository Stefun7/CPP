/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:09:49 by scesar            #+#    #+#             */
/*   Updated: 2026/06/05 11:40:14 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	// std::string a = "---3a4";
	// int b = std::atoi(a.c_str());

	// std::cout << b << std::endl;
	if(ac != 2)
	{
		std::cerr << "Wrong argument number, you need exactly one file !" << std::endl;
		return 1;
	}

	std::string file_name = static_cast<std::string>(av[1]);

	if(file_name.substr(file_name.length() - 5, file_name.length() - 1) != ".csv")
	{
		std::cerr << "Wrong file format." << std::endl;
		return 0;
	}

	try
	{
			std::map<std::string, float> data = csv_parser(file_name);
	}
	catch(std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}
