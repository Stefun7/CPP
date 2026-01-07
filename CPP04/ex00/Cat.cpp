/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 19:41:16 by stephen           #+#    #+#             */
/*   Updated: 2026/01/06 21:39:17 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
	this->_type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& C) : Animal(C){
	std::cout << "Copy Cat constructor called" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& C){
	std::cout << "Copy assignment Cat operator called" << std::endl;
	if (this != &C)
		this->_type = C._type;
	return *this;
}

void Cat::makeSound() const{
	std::cout << "Meow !" << std::endl;
}