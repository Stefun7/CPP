/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 18:42:33 by scesar            #+#    #+#             */
/*   Updated: 2026/01/28 19:00:48 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Bob"), _grade(150){
	std::cout << "We can all greet our new intern !" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name): _name(name), _grade(150){
	std::cout << "We can all greet our new intern, " << _name << " !" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &B): _name(B._name), _grade(B._grade){
	std::cout << "Wait, ther's two of you ?" << std::endl;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "You're fired !" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &B){
	if(this != &B)
	{
		this->_name = B._name;
		this->_grade = B._grade;
	}
	return *this;
}

