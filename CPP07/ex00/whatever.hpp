/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 17:04:27 by stephen           #+#    #+#             */
/*   Updated: 2026/03/26 12:52:01 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

template <typename T>
void swap(T &x, T &y){
	T temp = x;

	x = y;
	y = temp;
}

template <typename T>
T min(T const &x, T const &y){
	return(x < y ? x : y);
}

template <typename T>
T max(T const &x, T const &y){
	return(x > y ? x : y);
}