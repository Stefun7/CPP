/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:50:59 by stephen           #+#    #+#             */
/*   Updated: 2026/01/05 18:33:20 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
public:
	HumanB();
	HumanB(std::string name);
	~HumanB();

	void	attack();
	void	setWeapon(Weapon& W);

private:
	std::string	_name;
	Weapon	*_W;
};

#endif
