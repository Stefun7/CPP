/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:15:55 by stephen           #+#    #+#             */
/*   Updated: 2026/01/07 02:14:07 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include "Brain.hpp"

//"virtual" allows the derived class’s version of a function to be called even when using a base-class pointer or reference

class Animal{
public:
	Animal();
	Animal(const Animal &A);
	virtual ~Animal();

	Animal& operator=(const Animal &A);

	virtual void makeSound(void) const;

//getter
	virtual std::string getType(void) const;

protected:
	std::string _type;
};


#endif