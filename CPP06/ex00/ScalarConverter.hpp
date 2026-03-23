/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 13:02:39 by stephen           #+#    #+#             */
/*   Updated: 2026/03/18 14:11:16 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>
# include <cctype>
# include <iomanip>
# include <limits>

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