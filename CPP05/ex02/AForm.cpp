/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:43:27 by stephen           #+#    #+#             */
/*   Updated: 2026/02/26 13:13:47 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Usual paperasse"), _gr_to_sign(150), _gr_to_exec(150), _is_signed(false){
	std::cout << "Form created" << std::endl;
}

AForm::AForm(AForm const &F) : _name(F._name), _gr_to_sign(F._gr_to_sign), _gr_to_exec(F._gr_to_exec), _is_signed(false){
	std::cout << "Form copied" << std::endl;
}

AForm::AForm(std::string name, int gr_to_sign, int gr_to_exec) : _name(name), _gr_to_sign(gr_to_sign), _gr_to_exec(gr_to_exec), _is_signed(false){
	if(gr_to_sign < 1)
		throw(AForm::GradeTooHighException());
	if(gr_to_exec < 1)
		throw(AForm::GradeTooHighException());
	if(gr_to_sign > 150)
		throw(AForm::GradeTooLowException());
	if(gr_to_exec > 150)
		throw(AForm::GradeTooLowException());
	std::cout << name << " form created" << std::endl;
}

AForm::~AForm(){
	std::cout << "Form deleted" << std::endl;
}

AForm& AForm::operator=(AForm const &F){
	if(this != &F)
	{
		this->_gr_to_exec = F._gr_to_exec;
		this->_gr_to_sign = F._gr_to_sign;
	}
	return *this;
}

//getters
std::string AForm::getName() const{
	return this->_name;
}

std::string AForm::getSigned() const{
	if(this->_is_signed)
		return "yes";
	else
		return"no";
}

int AForm::getGr_to_Sign() const{
	return this->_gr_to_sign;
}

int AForm::getGr_to_Exec() const{
	return this->_gr_to_exec;
}

void AForm::beSigned(Bureaucrat const &B) {
	if(B.getGrade() > this->_gr_to_sign)
		throw Bureaucrat::GradeTooLowException();
	else
	this->_is_signed = true;
}

void AForm::execute(Bureaucrat const &executor) const{
	if (!this->_is_signed)
		throw FormNotSignedException();
	if (executor.getGrade() > this->_gr_to_exec)
		throw GradeTooLowException();
	action();
}

const char* AForm::GradeTooLowException::what() const throw(){
	return "Grade is too low !";
}

const char* AForm::GradeTooHighException::what() const throw(){
	return "Grade is too high !";
}

const char* AForm::FormNotSignedException::what() const throw(){
	return "Form not signed !";
}

std::ostream& operator<<(std::ostream &o, AForm const &F){
	o << "Form name : " << F.getName() << std::endl
	<< ".Grade to sign : " << F.getGr_to_Sign() << std::endl
	<< ".Grade to execute : " << F.getGr_to_Exec() << std::endl
	<< ".Is signed : " << F.getSigned();
	return o;
}