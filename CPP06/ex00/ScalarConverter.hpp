/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 13:02:39 by stephen           #+#    #+#             */
/*   Updated: 2026/06/05 12:38:24 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>
# include <cctype>
# include <iomanip>
# include <limits.h>

class ScalarConverter{
public:
	static void convert(std::string lit);

private:
	ScalarConverter();
	ScalarConverter(ScalarConverter const &S);
	~ScalarConverter();
	//constructor/destructor in private so the user can't instantiate the class

	ScalarConverter& operator=(ScalarConverter const &S);
};
