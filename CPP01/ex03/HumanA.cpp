/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:24:52 by stephen           #+#    #+#             */
/*   Updated: 2026/01/05 18:36:56 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &W): _name(name), _W(W){
}

HumanA::HumanA(Weapon &W): _name("Mr.Nobody"), _W(W){
}

HumanA::~HumanA(){
}

void	HumanA::attack(){
	std::cout << this->_name << " smashed the enemy head with "
				<< this->_W.getType() << std::endl;
}
