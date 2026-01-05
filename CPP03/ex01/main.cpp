/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 20:09:02 by stephen           #+#    #+#             */
/*   Updated: 2025/12/28 18:32:23 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "----- Creating ClapTrap -----" << std::endl;
	ClapTrap a("Alpha");

	std::cout << "\n----- Creating ScavTrap -----" << std::endl;
	ScavTrap b("Beta");

	std::cout << "\n----- Attacking -----" << std::endl;
	a.attack("a soldier");
	b.attack("an enemy");

	std::cout << "\n----- Taking damage -----" << std::endl;
	a.takeDamage(5);
	b.takeDamage(20);

	std::cout << "\n----- Repairing -----" << std::endl;
	a.beRepaired(3);
	b.beRepaired(10);

	std::cout << "\n----- Guardgate -----" << std::endl;
	b.guardGate();

	std::cout << "\n----- End of main -----" << std::endl;
	return 0;
}
