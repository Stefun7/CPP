/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 16:15:45 by scesar            #+#    #+#             */
/*   Updated: 2025/10/26 18:22:55 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	if(N <= 0)
		return NULL;

	Zombie *Horde = new (std::nothrow) Zombie[N];
	if(!Horde)
		return NULL;

	for(int i = 0; i < N; i++)
		Horde[i].setName(name);

	return Horde;
}
