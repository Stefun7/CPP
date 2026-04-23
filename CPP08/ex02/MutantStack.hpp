/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:41:08 by scesar            #+#    #+#             */
/*   Updated: 2026/04/23 15:36:27 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <stack>
# include <list>
# include <vector>

template <typename T>
class MutantStack : public std::stack<T>{
public:
	MutantStack() : std::stack<T>() {}
	MutantStack(MutantStack const &M) : std::stack<T>(M) {}
	~MutantStack() {}

	const MutantStack &operator=(MutantStack const &M){
		if(this != &M)
		{
			std::stack<T>::operator=(M);
		}
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator; //need to use typename here because it's a dependant type
	typedef typename std::stack<T>::container_type::const_iterator const_iterator; // allow to work on const Mutantstack also
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	//last two to really look like a stl container
	//all standard iterator function: begin(), end(), rbegin(), rend()
	iterator begin(){
		return this->c.begin();
	}
	iterator end(){
		return this->c.end();
	}
	reverse_iterator rbegin(){
		return this->c.rbegin();
	}
	reverse_iterator rend(){
		return this->c.rend();
	}
	const_iterator begin() const {
		return this->c.begin();
	}
	const_iterator end() const {
		return this->c.end();
	}
	const_reverse_iterator rbegin() const {
		return this->c.rbegin();
	}
	const_reverse_iterator rend() const {
		return this->c.rend();
	}
	//c is protected and come from stack
};
