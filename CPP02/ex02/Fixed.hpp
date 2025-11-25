/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   Fixed.hpp										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: stephen <stephen@student.42.fr>			+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2025/11/05 19:24:41 by stephen		   #+#	#+#			 */
/*   Updated: 2025/11/19 23:47:45 by stephen		  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed{
public:
	Fixed();
	Fixed(const Fixed &cpyFixed);
	Fixed(const int i);
	Fixed(const float f);
	~Fixed();

	Fixed& 	operator=(const Fixed& newFixed);

	bool	operator>(const Fixed& f) const;
	bool	operator<(const Fixed& f) const;
	bool	operator>=(const Fixed& f) const;
	bool	operator<=(const Fixed& f) const;
	bool	operator==(const Fixed& f) const;
	bool	operator!=(const Fixed& f) const;

	Fixed	operator+(const Fixed& f);
	Fixed	operator-(const Fixed& f);
	Fixed	operator*(const Fixed& f);
	Fixed	operator/(const Fixed& f);

	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);

	static Fixed &min(Fixed &f1,Fixed &f2);
	static const Fixed &min(const Fixed &f1, const Fixed &f2);
	static Fixed &max(Fixed &f1,Fixed &f2);
	static const Fixed &max(const Fixed &f1, const Fixed &f2);

	void	setRawBits(int const raw);

	int		getRawBits(void) const;

	float	toFloat(void) const;
	int		toInt(void) const;

private:
	int	_val;
	static const int	_bits = 8;
};

// const Fixed& f → the right operand is not modified
// bool operator<(Fixed& f) const;

// const after method → the left operand (this) is not modified
// Fixed& operator=(const Fixed& other);

std::ostream& operator<<(std::ostream &o, const Fixed &f);

#endif