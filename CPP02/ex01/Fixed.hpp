/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:24:41 by stephen           #+#    #+#             */
/*   Updated: 2025/11/10 23:57:40 by stephen          ###   ########.fr       */
/*                                                                            */
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

	void	setRawBits(int const raw);

	int		getRawBits(void) const;

	Fixed&	operator=(const Fixed &fixed);

	float	toFloat(void) const;
	int		toInt(void) const;

private:
	int	_val;
	static const int	_bits = 8;
};

std::ostream& operator<<(std::ostream &o, const Fixed &f);

#endif