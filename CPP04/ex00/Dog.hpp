/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 19:33:37 by stephen           #+#    #+#             */
/*   Updated: 2026/01/05 19:34:21 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal{
public:
	Dog();
	Dog(const Dog &D);
	~Dog();

	Dog& operator=(const Dog &D);

	void makeSound(void) const;
};

#endif