/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 21:31:21 by stephen           #+#    #+#             */
/*   Updated: 2026/01/06 21:45:55 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "----- BASIC OBJECTS -----" << std::endl;
	Animal A;
	Cat C;
	Dog D;

	std::cout << std::endl;

	std::cout << "----- MAKE SOUND -----" << std::endl;
	A.makeSound();
	C.makeSound();
	D.makeSound();

	std::cout << std::endl;

	std::cout << "----- POLYMORPHISM TEST -----" << std::endl;
	Animal* a1 = new Cat();
	Animal* a2 = new Dog();

	std::cout << "Type a1: " << a1->getType() << std::endl;
	std::cout << "Type a2: " << a2->getType() << std::endl;

	a1->makeSound();
	a2->makeSound();

	std::cout << std::endl;

	std::cout << "----- COPY CONSTRUCTOR TEST -----" << std::endl;
	Cat catCopy(C);
	Dog dogCopy(D);

	catCopy.makeSound();
	dogCopy.makeSound();

	std::cout << std::endl;

	std::cout << "----- COPY ASSIGNMENT TEST -----" << std::endl;
	Cat catAssign;
	Dog dogAssign;

	catAssign = C;
	dogAssign = D;

	catAssign.makeSound();
	dogAssign.makeSound();

	std::cout << std::endl;
	delete a1;
	delete a2;
	return 0;
}
