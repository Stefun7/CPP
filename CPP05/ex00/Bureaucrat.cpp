/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 18:42:33 by scesar            #+#    #+#             */
/*   Updated: 2026/06/02 16:25:28 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Bob"), _grade(150){
	std::cout << "We can all greet our new intern !" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &B): _name(B._name), _grade(B._grade){
	std::cout << "Wait, ther's two of you ?" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name): _name(name), _grade(150){
	std::cout << "We can all greet our new intern, " << _name << " !" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade){
	if(grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if(grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	std::cout << "Welcome on board, " << _name << " !"<< std::endl;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "You're fired !" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &B){
	if(this != &B)
	{
		// this->_name = B._name;		can't do that because _name is const => initialized once only in the constrictor
		this->_grade = B._grade;
	}
	return *this;
}

std::ostream& operator<<(std::ostream &o, Bureaucrat const &B){
	o << B.getName() << ", bureaucrat grade " << B.getGrade() << ".";
	return o;
}

void Bureaucrat::UpGrade(){
	if(this->_grade == 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade --;
}

void Bureaucrat::DownGrade(){
	if(this->_grade == 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade ++;
}

std::string Bureaucrat::getName() const{
	return this->_name;
}

int Bureaucrat::getGrade() const{
	return this->_grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade too high !";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade too low !";
}
