/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:04:40 by stephen           #+#    #+#             */
/*   Updated: 2025/10/27 20:06:20 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
}

Weapon::~Weapon(){
}

//setter
void Weapon::setType(const std::string type){
	this->_type = type;
}

//getter
const std::string&	Weapon::getType(){
	return this->_type;
}
