/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 18:13:34 by scesar            #+#    #+#             */
/*   Updated: 2026/04/01 18:24:50 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	std::vector<int> v;

	v.push_back(2);
	v.push_back(4);
	v.push_back(6);
	try
	{
		std::vector<int>::iterator here = easyfind(v, 4);
		std::cout << "index : " << *here << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}


	std::list<int> l;

	l.push_back(19);
	l.push_back(42);

	try
	{
		std::list<int>::iterator it = easyfind(l, 7);
		std::cout << "index : " << *it << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
