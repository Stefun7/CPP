/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 12:35:38 by stephen           #+#    #+#             */
/*   Updated: 2026/03/03 13:50:56 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# include "AForm.hpp"

class AForm;

class Intern{
public:
	Intern();
	Intern(Intern const &B);
	~Intern();

	Intern& operator=(Intern const &I);

	AForm* makeForm(std::string form, std::string target);
};

//need to understand << overload better
std::ostream& operator<<(std::ostream &o, Intern const &B);