/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:47:39 by scesar            #+#    #+#             */
/*   Updated: 2025/10/26 18:00:04 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie{
public:
	Zombie();
	Zombie(const std::string name);
	~Zombie();
	void	announce(void);
	void	setName(std::string name);

private:
	std::string	_name;
};

Zombie*	zombieHorde( int N, std::string name );

#endif
