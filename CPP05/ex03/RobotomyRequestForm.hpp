/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:23:28 by stephen           #+#    #+#             */
/*   Updated: 2026/02/20 12:44:09 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &R);
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();

	RobotomyRequestForm& operator=(RobotomyRequestForm const &R);

	void action() const;

private:
	std::string _target;
};