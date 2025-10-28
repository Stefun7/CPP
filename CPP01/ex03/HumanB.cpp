/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:53:44 by stephen           #+#    #+#             */
/*   Updated: 2025/10/27 20:13:02 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon W): _name(name), _W(W){
}
HumanB::HumanB(std::string name): _name(name){
	this->_W.setType(NULL);
}

HumanB::HumanB(){
	this->_name = "Mr. Nobody";
}

HumanB::~HumanB(){
}

void	HumanB::attack(){
	if(this->_W.getType())
	std::cout << this->_name << "Smashed the annemy head with a "
				<< this->_W.getType() << std::endl;
}