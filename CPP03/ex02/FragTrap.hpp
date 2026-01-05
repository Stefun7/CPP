/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:59:30 by stephen           #+#    #+#             */
/*   Updated: 2025/12/28 21:37:43 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
private :

public :
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& S);
	~FragTrap();
	FragTrap& operator=(const FragTrap& S);
	void attack(const std::string &target);
	void highFivesGuys( void );
};

#endif