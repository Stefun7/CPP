/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 14:10:05 by stephen           #+#    #+#             */
/*   Updated: 2026/03/03 14:33:23 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Intern intern;
	AForm* robot;
	AForm* shrub;
	AForm* pres;
	AForm* unknow;

	robot = intern.makeForm("robotomy request", "Target 1");
	shrub = intern.makeForm("shrubbery creation", "Target 2");
	pres = intern.makeForm("presidential pardon", "Target 3");
	unknow = intern.makeForm("wooptidoo", "Target 4");

	delete robot;
	delete shrub;
	delete pres;
	delete unknow;

	return 0;
}

