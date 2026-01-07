/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 19:41:16 by stephen           #+#    #+#             */
/*   Updated: 2026/01/07 02:01:16 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& C) : Animal(C){
	this->_brain = new Brain(*C._brain);
	std::cout << "Copy Cat constructor called" << std::endl;
}

Cat::~Cat(){
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& C){
	if (this != &C) {
		Animal::operator=(C);
		delete this->_brain;
		this->_brain = new Brain(*C._brain);
	}
	std::cout << "Copy assignment Cat operator called" << std::endl;
	return *this;
}

void Cat::makeSound() const{
	std::cout << "Meow !" << std::endl;
}

Brain *Cat::getBrain(void) const{
	return this->_brain;
}