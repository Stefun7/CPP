/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 21:40:28 by stephen           #+#    #+#             */
/*   Updated: 2025/12/28 22:05:01 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "Initiating FragTrap" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &C) : ClapTrap(C){
	std::cout << "Cloning FragTrap" << std::endl;
	*this = C;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "Assembling FragTrap" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	// ClapTrap(name, 100, 100, 30);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap terminated" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &C)
{
	std::cout << "Assigning FragTrap" << std::endl;
	if (this != &C)
	{
		this->name = C.name;
		this->hitPoints = C.hitPoints;
		this->energyPoints = C.energyPoints;
		this->attackDamage = C.attackDamage;
	}
	return *this;
}

void FragTrap::attack(const std::string& target) {
	if (energyPoints == 0 || hitPoints == 0) {
		std::cout << "FragTrap " << name << " has no light left..." << std::endl;
		return;
	}
	energyPoints--;
	std::cout << "FragTrap " << name << " laserbeamed " << target << ", burning it " << attackDamage << " hitpoints down !" <<std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << name << " here. Requesting high five... Please, I'm begging you" << std::endl;
}