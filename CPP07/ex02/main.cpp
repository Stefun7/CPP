/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 22:54:29 by scesar            #+#    #+#             */
/*   Updated: 2026/03/31 22:58:19 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	try
	{
		Array<int> arr(5);

		for (unsigned int i = 0; i < arr.size(); i++)
			arr[i] = i * 10;

		std::cout << "arr: ";
		for (unsigned int i = 0; i < arr.size(); i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;

		Array<int> copy(arr);
		copy[0] = 999;
		std::cout << "arr[0]: " << arr[0] << std::endl;
		std::cout << "copy[0]: " << copy[0] << std::endl;

		const Array<int>& constArr = arr;
		std::cout << "Const array element 2: " << constArr[2] << std::endl;

		try
		{
			arr[10] = 123;
		}
		catch (const std::exception &e)
		{
			std::cout << "Out-of-bounds exception caught: " << e.what() << std::endl;
		}

		try
		{
			arr[-1] = 456; // will wrap to large unsigned int
		}
		catch (const std::exception &e)
		{
			std::cout << "Negative index exception caught: " << e.what() << std::endl;
		}

	}
	catch (const std::exception &e)
	{
		std::cerr << "Unexpected exception: " << e.what() << std::endl;
	}

	return 0;
}
