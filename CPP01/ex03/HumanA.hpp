/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:44:12 by stephen           #+#    #+#             */
/*   Updated: 2025/10/30 20:32:16 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
public:
	HumanA(std::string name, Weapon& W);
	HumanA(Weapon& W);
	~HumanA();

	void	attack();

private:
std::string	_name;
Weapon	&_W;
};

#endif
