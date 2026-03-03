/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:23:20 by stephen           #+#    #+#             */
/*   Updated: 2026/02/20 12:47:21 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardon", 25, 5), _target("Your mom") {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardon", 25, 5), _target(target) {
	std::cout << "Target : " << target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &P) : AForm(P), _target(P._target){
	std::cout << "PresidentialPardon form copied" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PresidentialPardon form deleted" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &P){
	if(this != &P)
	{
		AForm::operator=(P);
		_target = P._target;
	}
	return *this;
}

void PresidentialPardonForm::action() const{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}