/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 17:17:12 by stephen           #+#    #+#             */
/*   Updated: 2026/03/18 13:49:37 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char ** av){
	// ScalarConverter S;

	if(ac != 2){
		std::cout << "One argument only !" << std::endl;
		return 1;
	}
	ScalarConverter::convert(av[1]);
	return 0;
}