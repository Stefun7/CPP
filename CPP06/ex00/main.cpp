/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 17:17:12 by stephen           #+#    #+#             */
/*   Updated: 2026/06/05 12:54:54 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char ** av){
	// ScalarConverter S;

	if(ac != 2){
		std::cout << "One argument only !" << std::endl;
		return 1;
	}
	std::string s = av[1];
	ScalarConverter::convert(s);
	return 0;
}
