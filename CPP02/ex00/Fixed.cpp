/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 22:46:43 by stephen           #+#    #+#             */
/*   Updated: 2025/11/05 23:54:05 by stephen          ###   ########.fr       */
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

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &fixed){
	std::cout << "Copy assignment operator called" << std::endl;

	if(this != &fixed)
		this->_val = fixed.getRawBits();
	return *this;
}

//setter
void	Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	this->_val = raw;
}

//getter
int	Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_val;
}

// static int id_counter = 0;

// Fixed::Fixed() : _val(0), _id(++id_counter) {
//     std::cout << "Default constructor called for object #" << _id << std::endl;
// }

// Fixed::Fixed(Fixed const &cpyFixed) : _id(++id_counter) {
//     std::cout << "Copy constructor called for object #" << _id
//               << " (copying from #" << cpyFixed._id << ")" << std::endl;
//     *this = cpyFixed;
// }

// Fixed::~Fixed() {
//     std::cout << "Destructor called for object #" << _id << std::endl;
// }

// Fixed& Fixed::operator=(Fixed const &fixed) {
//     std::cout << "Copy assignment operator called: #" << _id
//               << " = #" << fixed._id << std::endl;
//     if (this != &fixed)
//         this->_val = fixed.getRawBits();
//     return *this;
// }

// int Fixed::getRawBits(void) const {
//     std::cout << "getRawBits() called on object #" << _id << std::endl;
//     return _val;
// }

// void Fixed::setRawBits(int const raw) {
//     std::cout << "setRawBits() called on object #" << _id << std::endl;
//     _val = raw;
// }
