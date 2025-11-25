/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:24:41 by stephen           #+#    #+#             */
/*   Updated: 2025/11/05 23:54:17 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed{
public:
	Fixed();
	Fixed(const Fixed &cpyFixed);
	~Fixed();

	void setRawBits( int const raw );

	int getRawBits( void ) const;

	Fixed&	operator=(const Fixed &fixed);

private:
	int	_val;
	static const int	_bits = 8;
	// int _id;
};

#endif