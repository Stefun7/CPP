/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 15:34:58 by scesar            #+#    #+#             */
/*   Updated: 2026/03/23 16:42:14 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){
}

Base *generate(void){
	int r = std::rand() % 3;

	if(r == 0){
		std::cout << "base A generated" << std::endl;
		return new A;
	}
	else if(r == 1){
		std::cout << "base B generated" << std::endl;
		return new B;
	}
	else{
		std::cout << "base C generated" << std::endl;
		return new C;
	}
}

void identify(Base* p){
	if(dynamic_cast<A*>(p))
		std::cout << "base id : A" << std::endl;
	else if(dynamic_cast<B*>(p))
		std::cout << "base id : B" << std::endl;
	else if(dynamic_cast<C*>(p))
		std::cout << "base id : C" << std::endl;
}
//dynamic_cast with pointer (dynamic_cast<ptr*>) returns NULL if fails

void identify(Base& p){
	try
	{
		(void)dynamic_cast<A&>(p);
		//(void) here to avoid unused variable warning
		std::cout << "base id : A" << std::endl;
		return;
	}
	catch (std::exception&){}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "base id : B" << std::endl;
		return;
	}
	catch (std::exception&){}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "base id : C" << std::endl;
		return;
	}
	catch (std::exception&){}
}
//dynamic_cast with reference (dynamic_cast<ref&>) throws exception if fails

