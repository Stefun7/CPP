/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:09:49 by scesar            #+#    #+#             */
/*   Updated: 2026/04/29 18:58:08 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char *av)
{
	if(ac != 2)
	{
		std::cerr << "Wrong argument number, you need exactly one file !" << std::endl;
		return(1);
	}
	try{
			std::map<std::string, float> data = csv_parser();
	}
	catch(std::exception &e)
	{

	}
}
