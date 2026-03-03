/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:43:27 by stephen           #+#    #+#             */
/*   Updated: 2026/02/18 16:07:54 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Usual paperasse"), _gr_to_sign(150), _gr_to_exec(150), _is_signed(false){
	std::cout << "Form created" << std::endl;
}

Form::Form(Form &F) : _name(F._name), _gr_to_sign(F._gr_to_sign), _gr_to_exec(F._gr_to_exec), _is_signed(false){
	std::cout << "Form copied" << std::endl;
}

Form::Form(std::string name) : _name(name), _gr_to_sign(150), _gr_to_exec(150), _is_signed(false){
	std::cout << name << " form created" << std::endl;
}

Form::Form(std::string name, int gr_to_sign, int gr_to_exec) : _name(name), _gr_to_sign(gr_to_sign), _gr_to_exec(gr_to_exec), _is_signed(false){
	if(gr_to_sign < 1)
		throw(Form::GradeTooHighException());
	if(gr_to_exec < 1)
		throw(Form::GradeTooHighException());
	if(gr_to_sign > 150)
		throw(Form::GradeTooLowException());
	if(gr_to_exec > 150)
		throw(Form::GradeTooLowException());
	std::cout << name << " form created" << std::endl;
}

Form::~Form(){
	std::cout << "Form deleted" << std::endl;
}

Form& Form::operator=(Form const &F){
	if(this != &F)
	{
		this->_gr_to_exec = F._gr_to_exec;
		this->_gr_to_sign = F._gr_to_sign;
	}
	return *this;
}

//getters
std::string Form::getName() const{
	return this->_name;
}

std::string Form::getSigned() const{
	if(this->_is_signed)
		return "yes";
	else
		return"no";
}

int Form::getGr_to_Sign() const{
	return this->_gr_to_sign;
}

int Form::getGr_to_Exec() const{
	return this->_gr_to_exec;
}

void Form::beSigned(Bureaucrat const &B) {
	if(B.getGrade() > this->_gr_to_sign)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_is_signed = true;
}

const char* Form::GradeTooLowException::what() const throw(){
	return "Grade is too low !";
}

const char* Form::GradeTooHighException::what() const throw(){
	return "Grade is too high !";
}

std::ostream& operator<<(std::ostream &o, Form const &F){
	o << "Form name : " << F.getName() << std::endl
	<< ".Grade to sign : " << F.getGr_to_Sign() << std::endl
	<< ".Grade to execute : " << F.getGr_to_Exec() << std::endl
	<< ".Is signed : " << F.getSigned();
	return o;
}