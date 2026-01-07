/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 21:31:21 by stephen           #+#    #+#             */
/*   Updated: 2026/01/07 17:16:41 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	std::cout << "---- POLYMORPHISM TEST ----" << std::endl;
	const Animal* a = new Dog();
	const Animal* b = new Cat();
	// const Animal c;

	a->makeSound();
	b->makeSound();

	delete a;
	delete b;

	std::cout << std::endl;
	std::cout << "---- ARRAY TEST ----" << std::endl;
	Animal* animals[4];

	for (int i = 0; i < 2; i++)
		animals[i] = new Dog();
	for (int i = 2; i < 4; i++)
		animals[i] = new Cat();

	for (int i = 0; i < 4; i++)
		delete animals[i];

	std::cout << std::endl;
	std::cout << "---- DEEP COPY ----" << std::endl;
	Cat c1;

	std::cout << "c1 idea before: " << c1.getBrain()->getIdea(0) << std::endl;

	c1.getBrain()->setIdea(0, "Sleep");

	Cat c2 = c1;

	std::cout << "c1 idea now : " << c1.getBrain()->getIdea(0) << std::endl;
	std::cout << "c2 idea now: " << c2.getBrain()->getIdea(0) << std::endl;

	c2.getBrain()->setIdea(0, "Eat");

	std::cout << "c1 idea afterwards : " << c1.getBrain()->getIdea(0) << std::endl;
	std::cout << "c2 idea afterwards: " << c2.getBrain()->getIdea(0) << std::endl;


	return 0;
}
