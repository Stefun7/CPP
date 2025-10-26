/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:44:58 by scesar            #+#    #+#             */
/*   Updated: 2025/10/26 18:25:37 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(): _name("None"){
	std::cout << "An unnamed zombie spawned !" << std::endl;
}

Zombie::Zombie(const std::string name): _name(name){
	std::cout << _name << " has been summoned !" << std::endl;
}

Zombie::~Zombie(){
	std::cout << _name << " has been destroyed..." << std::endl;
}

void	Zombie::announce(void){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

//setter
void Zombie::setName(std::string name){
	this->_name = name;
	std::cout << "Reprogrammation... From now on, you'll be called *" << name << "*" << std::endl;
}
