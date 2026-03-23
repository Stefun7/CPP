/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 16:37:24 by scesar            #+#    #+#             */
/*   Updated: 2026/03/23 16:42:57 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	std::srand(std::time(NULL));

	for (int i = 0; i < 5; i++)
	{
		Base* obj = generate();
		std::cout << "identify(Base*): ";
		identify(obj);

		std::cout << "identify(Base&): ";
		identify(*obj);

		std::cout << "----------------------------" << std::endl;

		delete obj;
	}

	return 0;
}
