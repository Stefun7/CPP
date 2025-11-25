/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:29:31 by scesar            #+#    #+#             */
/*   Updated: 2025/11/19 23:28:47 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void){
	std::string str = "HI THIS IS BRAIN";
	std::string *strPTR = &str;
	std::string &strREF = str;

	std::cout << "Memory address of str : " << &str << std::endl;
	std::cout << "Memory address held by stringPTR : " << strPTR << std::endl;
	std::cout << "Memory address held by stringREF : " << &strREF << std::endl;

	std::cout << std::endl;

	std::cout << "Value of str : " << str << std::endl;
	std::cout << "Value pointed to by stringPTR : " << *strPTR << std::endl;
	std::cout << "Value pointed to by stringREF : " << strREF << std::endl;

	return 0;
}
