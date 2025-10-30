/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:25:51 by stephen           #+#    #+#             */
/*   Updated: 2025/10/30 20:25:41 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon{
public:
	Weapon(const std::string type);
	Weapon();
	~Weapon();

	const std::string& getType();

	void setType(const std::string type);

private:
	std::string	_type;
};

#endif
