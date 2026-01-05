/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 14:01:24 by stephen           #+#    #+#             */
/*   Updated: 2025/12/27 03:23:48 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private :

public :
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& S);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& S);
	void attack(const std::string &target);
	void guardGate( void );
};

#endif