/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:29:31 by scesar            #+#    #+#             */
/*   Updated: 2025/10/26 20:37:59 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void){
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address str : " << &str << std::endl;
    std::cout << "Memory address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF : " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "Value of str : " << str << std::endl;
    std::cout << "Value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF : " << stringREF << std::endl;

	return 0;
}
