/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:15:58 by stephen           #+#    #+#             */
/*   Updated: 2025/11/05 15:39:27 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){

	int N = 7;
	Zombie *H = zombieHorde(N, "Mr. Meeseeks");

	for(int i = 0; i < N; i++){
		H[i].announce();
	}

	delete[] H;
	return 0;
}