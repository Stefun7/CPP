/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:44:12 by stephen           #+#    #+#             */
/*   Updated: 2025/10/27 10:53:15 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
public:
	HumanA(std::string name, Weapon W);
	HumanA();
	~HumanA();

	void	attack();

private:
	Weapon	_W;
	std::string	_name;
};

#endif