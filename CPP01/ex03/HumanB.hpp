/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:50:59 by stephen           #+#    #+#             */
/*   Updated: 2025/10/27 19:57:03 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
public:
	HumanB(std::string name,  Weapon W);
	HumanB(std::string name);
	HumanB();
	~HumanB();

	void	attack();

private:
	Weapon	_W;
	std::string	_name;
};

#endif