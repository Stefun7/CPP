/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 22:46:43 by stephen           #+#    #+#             */
/*   Updated: 2025/11/25 00:07:19 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _val(0){
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &cpyFixed){
	// std::cout << "Copy constructor called" << std::endl;
	*this = cpyFixed;
}

Fixed::Fixed(const int i){
	// std::cout << "Int constructor called" << std::endl;
	this->_val = i << _bits;
}

Fixed::Fixed(const float f){
	// std::cout << "Float constructor called" << std::endl;
	this->_val = static_cast<int>(roundf(f * (1 << _bits)));
}

Fixed::~Fixed(){
	// std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &newFixed){
	// std::cout << "Copy assignment operator called" << std::endl;

	if(this != &newFixed)
		this->_val = newFixed.getRawBits();
	return *this;
}

bool	Fixed::operator>(const Fixed& f) const{
	if (this->_val > f._val)
		return true;
	else
		return false;
}

bool	Fixed::operator<(const Fixed& f) const{
	if (this->_val < f._val)
		return true;
	else
		return false;
}

bool	Fixed::operator>=(const Fixed& f) const{
	if (this->_val >= f._val)
		return true;
	else
		return false;
}

bool	Fixed::operator<=(const Fixed& f) const{
	if (this->_val <= f._val)
		return true;
	else
		return false;
}

bool	Fixed::operator==(const Fixed& f) const{
	if (this->_val == f._val)
		return true;
	else
		return false;
}

bool	Fixed::operator!=(const Fixed& f) const{
	if (this->_val != f._val)
		return true;
	else
		return false;
}

Fixed	Fixed::operator+(const Fixed& f){
	Fixed res;
	res.setRawBits(this->_val + f._val);
	return (res);
}

Fixed	Fixed::operator-(const Fixed& f){
	Fixed res;
	res.setRawBits(this->_val - f._val);
	return (res);
}

Fixed	Fixed::operator*(const Fixed& f){
	Fixed res;
	long pre = (this->_val * f._val) >> this->_bits;
	res.setRawBits(pre);
	return (res);
}

Fixed Fixed::operator/(const Fixed &f) {
    Fixed res;
    long num = (long)this->_val << _bits;
    long pre = num / f._val;
    res.setRawBits(pre);
    return res;
}

Fixed	&Fixed::operator++(void){
	this->_val++;
	return(*this);
}

Fixed	Fixed::operator++(int){
	Fixed temp(*this);
	this->_val++;
	return(temp);
}

Fixed	&Fixed::operator--(void){
	this->_val--;
	return(*this);
}

Fixed	Fixed::operator--(int){
	Fixed temp(*this);
	this->_val--;
	return(temp);
}

Fixed &Fixed::min(Fixed &f1,Fixed &f2){
	return(f1.getRawBits() < f2.getRawBits() ? f1 : f2 );
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2){
	return(f1.getRawBits() < f2.getRawBits() ? f1 : f2 );
}

Fixed &Fixed::max(Fixed &f1,Fixed &f2){
	return(f1.getRawBits() > f2.getRawBits() ? f1 : f2 );
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2){
	return(f1.getRawBits() > f2.getRawBits() ? f1 : f2 );
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

