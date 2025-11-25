/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 22:46:43 by stephen           #+#    #+#             */
/*   Updated: 2025/11/20 00:04:44 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _val(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &cpyFixed){
	std::cout << "Copy constructor called" << std::endl;
	*this = cpyFixed;
}

Fixed::Fixed(const int i){
	std::cout << "Int constructor called" << std::endl;
	this->_val = i << _bits;
}

Fixed::Fixed(const float f){
	std::cout << "Float constructor called" << std::endl;
	this->_val = static_cast<int>(roundf(f * (1 << _bits)));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &fixed){
	std::cout << "Copy assignment operator called" << std::endl;

	if(this != &fixed)
		this->_val = fixed.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream &o,const Fixed &f){
	o << f.toFloat();
	return o;
}

//setter
void	Fixed::setRawBits( int const raw ){
	// std::cout << "setRawBits member function called" << std::endl;
	this->_val = raw;
}

//getter
int	Fixed::getRawBits( void ) const{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_val;
}

int	Fixed::toInt(void) const{
	return this->_val >> this->_bits;
}

float	Fixed::toFloat(void) const{
	return static_cast<float>(this->_val) / (1 << _bits);
}

