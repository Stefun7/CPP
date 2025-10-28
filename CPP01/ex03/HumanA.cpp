/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:24:52 by stephen           #+#    #+#             */
/*   Updated: 2025/10/27 19:59:46 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon W): _name(name), _W(W){
}

HumanA::HumanA(){
	this->_name = "Mr. Nobody";
}

HumanA::~HumanA(){
}

void	HumanA::attack(){
	std::cout << this->_name << "Smashed the annemy head with a "
				<< this->_W.getType() << std::endl;
}