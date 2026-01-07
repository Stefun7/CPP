/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 19:41:27 by stephen           #+#    #+#             */
/*   Updated: 2026/01/06 21:40:41 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(){
	this->_type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& D) : Animal(D){
	std::cout << "Copy Dog constructor called" << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& D){
	std::cout << "Copy assignment Dog operator called" << std::endl;
	if (this != &D)
		this->_type = D._type;
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Wouf !" << std::endl;
}