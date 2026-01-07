/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 01:26:52 by stephen           #+#    #+#             */
/*   Updated: 2026/01/07 01:46:00 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain(){
	for (int i = 0; i < 100; i++){
		this->_ideas[i] = "...?";
	}
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& brainREF){
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = brainREF._ideas[i];
	}
	std::cout << "Copy Brain constructor called" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& B){
	std::cout << "Copy assignment Brain operator called" << std::endl;
	if (this != &B){
		for(int i = 0; i < 100; i++) {
			this->_ideas[i] = B._ideas[i];
		}
	}
	return *this;
}

void Brain::setIdea(unsigned int index, std::string idea){
	if (index >= 100){
		std::cout << "Can't memorize so much things..." << std::endl;
		return;
	}
	this->_ideas[index] = idea;
}

std::string Brain::getIdea(unsigned int index) const{
	if (index >= 100){
		std::cout << "Can't remember so much things..." << std::endl;
		return "";
	}
	return this->_ideas[index];
}