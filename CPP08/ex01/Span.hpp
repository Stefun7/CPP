/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 13:31:26 by scesar            #+#    #+#             */
/*   Updated: 2026/04/21 15:25:50 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <vector>
# include <list>
# include <algorithm>
# include <iterator>
# include <limits>

class Span{
public:
	Span(unsigned int N);
	Span(Span const &S);
	~Span();

	Span &operator=(Span const &S);

	void addNumber(int n);

	template <typename it>
	void addNumbers(it start, it end){
		size_t dist = std::distance(start, end);

		if(this->_vec.size() + dist > this->_max_sz)
			throw(WillOverflow());
		this->_vec.insert(this->_vec.end(), start, end);
	}
	//Template functions must be defined in the header file because the compiler needs to see the full implementation at the moment it uses the template

	int shortestSpan();
	int longestSpan();

	class AlreadyFull : public std::exception{
	public:
		const char *what() const throw(){
			return "Already full !";
		}
	};
	class WillOverflow : public std::exception{
	public:
		const char *what() const throw(){
			return "Not enough space !";
		}
	};
	class NoSpan : public std::exception{
	public:
		const char *what() const throw(){
			return "At leat 2 int needed !";
		}
	};
private:
	unsigned int _max_sz;
	std::vector<int> _vec;
	Span();
};
