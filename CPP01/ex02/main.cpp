/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:29:31 by scesar            #+#    #+#             */
/*   Updated: 2025/10/26 18:25:04 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int	main(void){
	Zombie *HordeTic = zombieHorde(2, "Tic");
	for(size_t i = 0; i < 2; i++)
		HordeTic[i].announce();
	delete [] HordeTic;

	std::cout << std::endl << "-----------------------------------------" << std::endl;
	std::cout << "Tic wave ended... Prepapre for new round." << std::endl;
	std::cout << "-----------------------------------------" << std::endl << std::endl;


	Zombie *HordeTac = zombieHorde(10, "Tac");
	for(size_t i = 0; i < 10; i++)
		HordeTac[i].announce();
	delete [] HordeTac;

	std::cout << std::endl << "------------------------------------" << std::endl;
	std::cout << "Tac wave ended... Well done soldier." << std::endl;
	std::cout << "------------------------------------" << std::endl << std::endl;


	return 0;
}
