/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 19:41:27 by stephen           #+#    #+#             */
/*   Updated: 2026/01/07 02:17:50 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(){
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& D) : Animal(D){
	this->_brain = new Brain(*D._brain);
	std::cout << "Copy Dog constructor called" << std::endl;
}

Dog::~Dog(){
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& D){
	if (this != &D) {
		Animal::operator=(D);
		delete this->_brain;
		this->_brain = new Brain(*D._brain);
	}
	std::cout << "Copy assignment Dog operator called" << std::endl;
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Wouf !" << std::endl;
}

Brain *Dog::getBrain(void) const{
	return this->_brain;
}