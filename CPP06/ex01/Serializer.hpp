/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:50:39 by stephen           #+#    #+#             */
/*   Updated: 2026/03/18 14:12:17 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <cstdint>
# include "Data.hpp"

class Serializer{
public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
	//static means belongs to the class, not an instance
	//we use the method directly via Serializer::*method* and not S.*method*
private:
	Serializer();
	Serializer(Serializer const &S);
	~Serializer();

	Serializer& operator=(Serializer const &S);
};