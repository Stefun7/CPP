/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 20:09:02 by stephen           #+#    #+#             */
/*   Updated: 2025/12/26 13:57:54 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Alpha;
	ClapTrap Delta("Delta");
	ClapTrap Bravo(Delta);

	std::cout << "|Starting hitpoints: " << Bravo.gethitPoints() << "|" << std::endl;
	Bravo.attack("Target");
	Bravo.takeDamage(5);
	std::cout << "|Hitpoints after 5 damage: " << Bravo.gethitPoints() << "|" << std::endl;
	Bravo.beRepaired(10);
	std::cout << "|Hitpoints after 10 repaired: " << Bravo.gethitPoints() << "|" << std::endl;
	Bravo.takeDamage(15);
	std::cout << "|Hitpoints after 15 damage: " << Bravo.gethitPoints() << "|" << std::endl;
	Bravo.beRepaired(1);
	std::cout << "|Hitpoints after trying 1 repaired: " << Bravo.gethitPoints() << "|" << std::endl;

	return 0;
}