/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 17:13:47 by scesar            #+#    #+#             */
/*   Updated: 2026/03/31 21:00:14 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <cstdlib>
# include <exception>
# include <ctime>

template <typename T>
class Array{
public:
	Array() : _arr(NULL), _sz(0) {}
	Array(unsigned int n) : _arr(new T[n]()), _sz(n) {} //new T[n]() default initializes everything
	Array(Array const &A) : _sz(A._sz){
		this->_arr = new T[A._sz];
		for(size_t i = 0; i < A._sz; i++)
			this->_arr[i] = A._arr[i];
	}
	~Array() {
		delete[] this->_arr;
	}

//operators
	Array& operator=(Array const &A){
		if (this != &A)
		{
			delete[] this->_arr; // ther's a differnce between delete and delete[]
			this->_sz = A._sz;
			this->_arr = new T[A._sz];
			for(size_t i = 0; i < A._sz; i++)
				this->_arr[i] = A._arr[i];
		}
		return (*this);
	}
	T& operator[](unsigned int i) {
		if(i >= this->_sz)
			throw(OoB());
		return this->_arr[i];
	}
	const T& operator[](unsigned int i) const{
		if(i >= this->_sz)
			throw(OoB());
		return this->_arr[i];
	}

//exception
	class OoB : public std::exception {
	public:
		const char *what() const throw(){
			return "Index out of bounds";
		};
	};

//method
	size_t size() const{
		return this->_sz;
	}
private:
	T *_arr;
	size_t _sz;
};

// Difference between new T[n]() and new T[n]
//--------------------
// new T[n]()
// Value-initializes elements
// For int → initializes to 0
// For objects → calls default constructor

//--------------------
// new T[n]
// Default-initializes elements
// For int → uninitialized
// For objects → calls default constructor (same)
