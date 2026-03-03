/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 18:42:33 by scesar            #+#    #+#             */
/*   Updated: 2026/03/03 13:06:32 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Bob"), _grade(150){
	std::cout << "We can all greet our new guy !" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &B): _name(B._name), _grade(B._grade){
	std::cout << "Wait, ther's two of you ?" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name): _name(name), _grade(150){
	std::cout << "We can all greet our new guy, " << _name << " !" << std::endl;
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

//getters
std::string Bureaucrat::getName() const{
	return this->_name;
}

int Bureaucrat::getGrade() const{
	return this->_grade;
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

void Bureaucrat::signForm(AForm &F){
	try{
		F.beSigned(*this);
		std::cout << this->_name << " signed " << F.getName() << std::endl;
	}
	catch(std::exception& e){
		std::cout << this->_name << " couldn't sign " << F.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &F){
	try{
		F.execute(*this);
	}
	catch(std::exception &e){
		std::cout << this->_name << " couldn't execute " << F.getName() << " because " << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade too high !";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade too low !";
}

std::ostream& operator<<(std::ostream &o, Bureaucrat const &B){
	o << B.getName() << ", bureaucrat grade " << B.getGrade() << ".";
	return o;
}