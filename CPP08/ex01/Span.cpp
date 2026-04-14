/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 17:53:49 by scesar            #+#    #+#             */
/*   Updated: 2026/04/14 15:04:12 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _max_sz(N){
}

Span::Span(Span const &S) : _max_sz(S._max_sz), _vec(S._vec){
}

Span::~Span(){
}

Span& Span::operator=(Span const &S){
	if(this != &S)
	{
		this->_max_sz = S._max_sz;
		this->_vec = S._vec;
	}
	return *this;
}

void Span::addNumber(int n){
	if(this->_vec.size() >= this->_max_sz)
		throw(AlreadyFull());
	this->_vec.push_back(n);
}

int Span::shortestSpan(){
	if(this->_vec.size() < 2){
		throw(NoSpan());
	}
	std::vector<int> temp = this->_vec;
	std::sort(temp.begin(), temp.end());
	int sh = std::numeric_limits<int>::max();
	for(size_t i = 1; i < temp.size() - 1; i++){
		int is_it = temp[i] - temp[i - 1];
		if (is_it < sh)
			sh = is_it;
	}
	return sh;
}

int Span::longestSpan(){
	if (this->_vec.size() <= 1)
		throw (NoSpan());
	int min = *std::min_element(_vec.begin(), _vec.end());
	int max = *std::max_element(_vec.begin(), _vec.end());
	return max - min;
}
