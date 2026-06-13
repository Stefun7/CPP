/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 12:34:37 by stephen           #+#    #+#             */
/*   Updated: 2026/06/13 17:58:58 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	int a = 2;
	int b = 5;

	swap(a, b);
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "min(a, b) : " << ::min(a,b) << std::endl;
	std::cout << "max(a, b) : " << ::max(a,b) << std::endl;

	std::cout << "--------------"<< std::endl;

	std::string c = "str1";
	std::string d = "str2";

	swap(c, d);
	std::cout << "c : " << c << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "min(c, d) : " << ::min( c, d ) << std::endl;
	std::cout << "max(c, d) : " << ::max( c, d ) << std::endl;

	return 0;
}

//here we use :: before function because sometimes there are multiple functions with the same name
//means here we call the function from the global namespace
