/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:09:49 by scesar            #+#    #+#             */
/*   Updated: 2026/06/11 18:39:37 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	// std::string a = "01";
	// int b = std::atoi(a.c_str());

	// std::cout << b << std::endl;
	if(ac != 2)
	{
		std::cerr << "Wrong argument number, you need exactly one file !" << std::endl;
		return 1;
	}

	std::string file_name = static_cast<std::string>(av[1]);

	// if(file_name.substr(file_name.length() - 4, file_name.length() - 1) != ".csv")
	// {
	// 	std::cerr << "Wrong file format." << std::endl;
	// 	return 0;
	// }

	try
	{
			std::map<std::string, float> data = csv_parser("data.csv");
			std::map<std::string, float> to_find = input_parser(data, file_name);

	}
	catch(std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}
