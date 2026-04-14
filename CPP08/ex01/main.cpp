/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:52:21 by scesar            #+#    #+#             */
/*   Updated: 2026/04/14 14:53:31 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span:  " << sp.longestSpan() << std::endl;

	std::cout << "\n=== Overflow test ===" << std::endl;
	try
	{
		sp.addNumber(42); // should throw
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\n=== Range test (vector) ===" << std::endl;
	Span sp2(10);

	std::vector<int> v;
	v.push_back(100);
	v.push_back(200);
	v.push_back(300);
	v.push_back(400);
	v.push_back(500);
	sp2.addNumbers(v.begin(), v.end());

	std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest span:  " << sp2.longestSpan() << std::endl;

	std::cout << "\n=== Range test (list) ===" << std::endl;
	std::list<int> lst;
	lst.push_back(7);
	lst.push_back(3);
	lst.push_back(20);
	lst.push_back(1);

	Span sp3(10);
	sp3.addNumbers(lst.begin(), lst.end());

	std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
	std::cout << "Longest span:  " << sp3.longestSpan() << std::endl;

	std::cout << "\n=== Big test ===" << std::endl;
	Span big(10000);

	std::vector<int> bigVec;
	for (int i = 0; i < 10000; ++i)
		bigVec.push_back(i * 2);

	big.addNumbers(bigVec.begin(), bigVec.end());

	std::cout << "Shortest span: " << big.shortestSpan() << std::endl;
	std::cout << "Longest span:  " << big.longestSpan() << std::endl;

	std::cout << "\n=== Edge case: not enough numbers ===" << std::endl;
	Span sp4(5);

	try
	{
		sp4.addNumber(42);
		std::cout << sp4.shortestSpan() << std::endl; // should throw
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
