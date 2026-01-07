/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 21:27:57 by stephen           #+#    #+#             */
/*   Updated: 2026/01/06 21:27:59 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
	this->_type = "WrongCat";
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& C) : WrongAnimal(C){
	std::cout << "Copy WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& C){
	std::cout << "Copy assignment WrongCat operator called" << std::endl;
	if (this != &C)
		this->_type = C._type;
	return *this;
}

void WrongCat::makeSound() const{
	std::cout << "Meow !" << std::endl;
}