/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:23:29 by stephen           #+#    #+#             */
/*   Updated: 2026/03/03 12:05:30 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreation", 145, 137), _target("garden") {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreation", 145, 137), _target(target) {
	std::cout << "Target : " << target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &S) : AForm(S), _target(S._target){
	std::cout << "ShrubberyCreation form copied" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyCreation form deleted" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &S){
	if(this != &S)
	{
		AForm::operator=(S);
		_target = S._target;
	}
	return *this;
}

void ShrubberyCreationForm::action() const{
	std::ofstream file((_target + "_shrubbery").c_str());
	//.c_str because older C++ file API expect C strings (like const char* here) and not std::string

	if (!file)
	{
		std::cerr << "Error when trying to create Shrubbery file" << std::endl;
		return;
	}

	file <<
"     ccee88oo\n"
"  C8O8O8Q8PoOb o8oo\n"
" dOB69QO8PdUOpugoO9bD\n"
"CgggbU8OU qOp qOdoUOdcb\n"
"    6OuU  /p u gcoUodpP\n"
"      \\//  /douUP\n"
"        \\////\n"
"         |||/\n"
"         |||\n"
"         |||\n"
"   .....//|||\\....";

	file.close();
}
