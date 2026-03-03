/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 14:10:05 by stephen           #+#    #+#             */
/*   Updated: 2026/03/03 12:09:29 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::srand(std::time(NULL));

	std::cout << "===== TEST 1: SHRUBBERY SUCCESS =====\n" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);
		ShrubberyCreationForm shrub("home");

		boss.signForm(shrub);
		boss.executeForm(shrub);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== TEST 2: ROBOTOMY 50% =====\n" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);
		RobotomyRequestForm robot("Bender");

		boss.signForm(robot);
		std::cout << std::endl;

		boss.executeForm(robot);
		boss.executeForm(robot);
		boss.executeForm(robot);
		boss.executeForm(robot);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== TEST 3: PRESIDENTIAL PARDON =====\n" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);
		PresidentialPardonForm pardon("Arthur Dent");

		boss.signForm(pardon);
		boss.executeForm(pardon);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== TEST 4: GRADE TOO LOW TO SIGN/EXECUTE =====\n" << std::endl;
	try
	{
		Bureaucrat intern("Intern", 150);
		ShrubberyCreationForm shrub("garden");

		intern.signForm(shrub);
		intern.executeForm(shrub);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== TEST 5: EXECUTE WITH LOW GRADE =====\n" << std::endl;
	try
	{
		Bureaucrat signer("Signer", 70);
		Bureaucrat executor("Executor", 140);

		RobotomyRequestForm robot("Wall-E");

		signer.signForm(robot);
		executor.executeForm(robot);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== END OF TESTS =====\n" << std::endl;

	return 0;
}

