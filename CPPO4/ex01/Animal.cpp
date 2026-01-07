/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 19:34:25 by stephen           #+#    #+#             */
/*   Updated: 2026/01/06 21:12:58 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal"){
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& A) : _type(A._type){
	std::cout << "Copy Animal constructor called" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& A){
	std::cout << "Copy assignment Animal operator called" << std::endl;
	if (this != &A)
		this->_type = A._type;
	return *this;
}

std::string Animal::getType() const{
	return this->_type;
}

void Animal::makeSound() const{
	std::cout << "Basic Animal noise" << std::endl;
}