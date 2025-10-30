/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:53:44 by stephen           #+#    #+#             */
/*   Updated: 2025/10/30 20:46:48 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _W(NULL){
}

HumanB::HumanB(): _name("Mr.Nobody"), _W(NULL){
}

HumanB::~HumanB(){
}

void	HumanB::attack(){
	if(_W && !_W->getType().empty())
		std::cout << this->_name << " smashed the enemy head with " << this->_W->getType() << std::endl;
	else
		std::cout << this->_name << " smashed the enemy head with his bare hands."<< std::endl;

}

void	HumanB::setWeapon(Weapon& W){
	this->_W = &W;
}
