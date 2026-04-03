/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 13:31:26 by scesar            #+#    #+#             */
/*   Updated: 2026/04/03 19:42:49 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <vector>
# include <algorithm>
# include <limits>

class Span{
public:
	Span(unsigned int N);
	Span(Span const &S);
	~Span();

	Span &operator=(Span const &S);

	void addNumber(int n);
	int shortestSpan();
	int longestSpan();

	class AlreadyFull : public std::exception{
	public:
		const char *what() const throw(){
			return "Already full !";
		}
	};
	class NoSpan : public std::exception{
	public:
		const char *what() const throw(){
			return "At leat 2 int needed !";
		}
	};
private:
	std::vector<int> _vec;
	unsigned int _max_sz;
	Span();
};
