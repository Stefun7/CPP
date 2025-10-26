/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:42:31 by scesar            #+#    #+#             */
/*   Updated: 2025/10/26 16:06:20 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name){
	if(name.empty())
		return NULL;
	Zombie	*nz = new (std::nothrow) Zombie(name);
	if (!nz)
		return NULL;
	return(nz);
}
