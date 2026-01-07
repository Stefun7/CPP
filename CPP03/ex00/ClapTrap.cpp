/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 20:09:00 by stephen           #+#    #+#             */
/*   Updated: 2026/01/06 21:07:00 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Omega"), hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &C) : name(C.name), hitPoints(C.hitPoints), energyPoints(C.energyPoints), attackDamage(C.attackDamage){
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << "String constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &C){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &C)
	{
		this->name = C.name;
		this->hitPoints = C.hitPoints;
		this->energyPoints = C.energyPoints;
		this->attackDamage = C.attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string &target){
	if (this->hitPoints == 0){
		std::cout << this->name << " down. Waiting for revive" << std::endl;
		return;
	}
	if (this->energyPoints == 0) {
		std::cout << this->name << " is empty. Waiting for restock" << std::endl;
		return ;
	}
	std::cout << this->name << " fires at " << target << " inflicting him " << this->attackDamage << " hitpoints" << std::endl;
	this->energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->hitPoints == 0){
		std::cout << this->name << " already down... Leave this poor thing alone" << std::endl;
		return ;
	}
	if (amount >= this->hitPoints){
		std::cout << this->name << " got shot down and lost "<< amount << " hitpoints. We lost it..." << std::endl;
		this->hitPoints = 0;
		return ;
	}
	std::cout << this->name << " got shot and took "<< amount << " hitpoints" << std::endl;
	this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->hitPoints == 0){
		std::cout << this->name << " still down. Waiting for revive." << std::endl;
		return ;
	}
	if (this->energyPoints == 0) {
		std::cout << this->name << " dry. Need a refill" << std::endl;
		return ;
	}
	std::cout << this->name << " got repaired by " << amount << " hitpoints" << std::endl;
	this->hitPoints += amount;
	this->energyPoints -= 1;
}

unsigned int ClapTrap::gethitPoints(void){
	return this->hitPoints;
}