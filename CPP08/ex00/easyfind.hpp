/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:17:32 by scesar            #+#    #+#             */
/*   Updated: 2026/04/01 18:24:54 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <algorithm>
# include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &cont, int to_find){
	typename T::iterator here = std::find(cont.begin(), cont.end(), to_find); //std::find works with any containers
	if(here == cont.end())
		throw std::runtime_error("value not in container");
	return here;
}
