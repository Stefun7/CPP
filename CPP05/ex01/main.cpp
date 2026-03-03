/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 02:40:49 by stephen           #+#    #+#             */
/*   Updated: 2026/02/06 02:48:40 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "----- VALID OBJECTS -----" << std::endl;
	try
	{
		Bureaucrat bob("Bob", 50);
		Form taxForm("Tax", 75, 30);

		std::cout << bob << std::endl;
		std::cout << taxForm << std::endl;

		bob.signForm(taxForm);
		std::cout << taxForm << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n----- SIGN FAILURE -----" << std::endl;
	try
	{
		Bureaucrat jim("Jim", 100);
		Form secretForm("Secret Form", 50, 10);

		std::cout << jim << std::endl;
		std::cout << secretForm << std::endl;

		jim.signForm(secretForm);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n----- INVALID FORM (TOO HIGH) -----" << std::endl;
	try
	{
		Form invalidForm("Impossible", 0, 10);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n----- INVALID FORM (TOO LOW) -----" << std::endl;
	try
	{
		Form invalidForm("Garbage", 151, 10);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
