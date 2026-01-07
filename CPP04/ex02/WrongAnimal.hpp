/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 21:01:45 by stephen           #+#    #+#             */
/*   Updated: 2026/01/06 21:01:49 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &Wa);
	virtual ~WrongAnimal();

	WrongAnimal& operator=(const WrongAnimal &Wa);

	virtual void makeSound(void) const;
	virtual std::string getType(void) const;

protected:
	std::string _type;
};

#endif