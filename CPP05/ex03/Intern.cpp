/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 13:05:17 by stephen           #+#    #+#             */
/*   Updated: 2026/03/03 14:42:25 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){
	std::cout << "We can all greet our new intern !" << std::endl;
}

Intern::Intern(Intern const &I){
	*this = I;
	std::cout << "Twice the hands, half the work..." << std::endl;
}

Intern::~Intern(){
	std::cout << "End of the road for you buddy" << std::endl;
}

Intern& Intern::operator=(Intern const &I){
	if (this != &I)
		*this = I;
	return *this;
}

AForm* makeShrubbery(const std::string target){
	return new ShrubberyCreationForm(target);
}

AForm* makeRobot(const std::string target){
	return new RobotomyRequestForm(target);
}

AForm* makePresident(const std::string target){
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string form, const std::string target)
{
	std::string formArray[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm* (*fct[3])(const std::string) = {&makeShrubbery, &makeRobot, &makePresident};

	for (int i = 0; i < 3; i++)
	{
		if (form == formArray[i])
		{
			std::cout << "Intern creates " << form << std::endl;
			return fct[i](target);
		}
	}

	std::cout << "Invalid form name" << std::endl;
	return NULL;
}