/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:15:55 by stephen           #+#    #+#             */
/*   Updated: 2025/12/29 18:20:09 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal{
public:
	Animal();
	Animal(Animal &A);
	~Animal();

	Animal& operator=(const Animal &A);

protected:
	std::string type;
};


#endif