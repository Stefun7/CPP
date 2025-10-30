/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:04:40 by stephen           #+#    #+#             */
/*   Updated: 2025/10/30 20:41:55 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type): _type(type){
}

Weapon::Weapon(): _type(NULL){
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
