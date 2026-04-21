/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:52:21 by scesar            #+#    #+#             */
/*   Updated: 2026/04/21 16:05:32 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span S = Span(5);
	S.addNumber(6);
	S.addNumber(3);
	S.addNumber(17);
	S.addNumber(9);
	S.addNumber(11);
	std::cout << S.shortestSpan() << std::endl;
	std::cout << S.longestSpan() << std::endl;

	std::cout << "\n=== Overflow test ===" << std::endl;
	try
	{
		S.addNumber(42);
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\n=== Range test with vec ===" << std::endl;
	Span S2(10);

	std::vector<int> v;
	v.push_back(100);
	v.push_back(200);
	v.push_back(300);
	v.push_back(400);
	v.push_back(500);
	S2.addNumbers(v.begin(), v.end());

	std::cout << "Shortest : " << S2.shortestSpan() << std::endl;
	std::cout << "Longest :  " << S2.longestSpan() << std::endl;

	std::cout << "\n=== Range test with list ===" << std::endl;
	std::list<int> lst;
	lst.push_back(7);
	lst.push_back(3);
	lst.push_back(20);
	lst.push_back(1);

	Span S3(10);
	S3.addNumbers(lst.begin(), lst.end());

	std::cout << "Shortest : " << S3.shortestSpan() << std::endl;
	std::cout << "Longest :  " << S3.longestSpan() << std::endl;

	std::cout << "\n=== Big test ===" << std::endl;
	Span big(10000);

	std::vector<int> bigVec;
	for (int i = 0; i < 10000; ++i)
		bigVec.push_back(i * 2);

	big.addNumbers(bigVec.begin(), bigVec.end());

	std::cout << "Shortest : " << big.shortestSpan() << std::endl;
	std::cout << "Longest :  " << big.longestSpan() << std::endl;

	std::cout << "\n=== Edge case: not enough numbers ===" << std::endl;
	Span sp4(5);

	try
	{
		sp4.addNumber(42);
		std::cout << sp4.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
