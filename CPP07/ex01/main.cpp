/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 19:28:03 by scesar            #+#    #+#             */
/*   Updated: 2026/03/30 19:42:44 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void print(T const &x)
{
	std::cout << x << std::endl;
}

template <typename T>
void up(T &x)
{
	x++;
}

int main()
{
	int arr[] = {1, 2, 3};

	iter(arr, 3, print);
	iter(arr, 3, up);
	std::cout << "------------------" << std::endl;
	iter(arr, 3, print);

	return 0;
}
