/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 14:20:30 by stephen           #+#    #+#             */
/*   Updated: 2026/03/18 14:29:38 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(){
	Data d;
	d.a = 19;
	d.b = 's';
	d.c = "Hey";

	Data *ptr_d = &d;

	uintptr_t u = Serializer::serialize(ptr_d);

	Data *ptr_d2 = Serializer::deserialize(u);

	std::cout << "Original pointer: " << ptr_d << std::endl;
	std::cout << "Deserialized ptr: " << ptr_d2 << std::endl;

	std::cout << "Data content:" << std::endl;
	std::cout << "a: " << ptr_d2->a << std::endl;
	std::cout << "b: " << ptr_d2->b << std::endl;
	std::cout << "c: " << ptr_d2->c << std::endl;

	return 0;
}