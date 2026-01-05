/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:13:42 by stephen           #+#    #+#             */
/*   Updated: 2025/12/27 12:10:40 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "Initiating Scav" << std::endl;
	this->hitPoints = 50;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &C) : ClapTrap(C){
	std::cout << "Cloning Scav" << std::endl;
	*this = C;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "Assembling Scav" << std::endl;
	this->name = name;
	this->hitPoints = 50;
	this->energyPoints = 50;
	this->attackDamage = 20;
	// ClapTrap(name, 100, 50, 20);
}

ScavTrap::~ScavTrap() {
	std::cout << "Scav terminated" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &C)
{
	std::cout << "Assigning Scav" << std::endl;
	if (this != &C)
	{
		this->name = C.name;
		this->hitPoints = C.hitPoints;
		this->energyPoints = C.energyPoints;
		this->attackDamage = C.attackDamage;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	if (energyPoints == 0 || hitPoints == 0) {
		std::cout << "ScavTrap " << name << " has no blade left" << std::endl;
		return;
	}
	energyPoints--;
	std::cout << "ScavTrap " << name << " slashes " << target << ", causing " << attackDamage << " points of damage!" <<std::endl;
}

void ScavTrap::guardGate(void){
	std::cout << name << " activated Gate keeper mode" << std::endl;
}