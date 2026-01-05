/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 20:09:02 by stephen           #+#    #+#             */
/*   Updated: 2025/12/28 22:14:51 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "----- Creating ClapTrap -----" << std::endl;
	ClapTrap a("Alpha");

	std::cout << "\n----- Creating ScavTrap -----" << std::endl;
	ScavTrap b("Beta");

	std::cout << "\n----- Creating ScavTrap -----" << std::endl;
	FragTrap c("Gamma");

	std::cout << "\n----- Attacking -----" << std::endl;
	a.attack("a soldier");
	b.attack("an enemy");
	c.attack("the ship");

	std::cout << "\n----- Taking damage -----" << std::endl;
	a.takeDamage(5);
	b.takeDamage(20);
	c.takeDamage(50);

	std::cout << "\n----- Repairing -----" << std::endl;
	a.beRepaired(3);
	b.beRepaired(10);
	c.beRepaired(40);

	std::cout << "\n----- Special abilities -----" << std::endl;
	b.guardGate();
	c.highFivesGuys();

	std::cout << "\n----- The End -----" << std::endl;
	return 0;
}
