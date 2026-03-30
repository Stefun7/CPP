/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 13:14:31 by stephen           #+#    #+#             */
/*   Updated: 2026/03/30 19:33:21 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

template <typename T>
void iter(T *arr, const size_t len, void (*fct) (T &))
{
	for(size_t i = 0; i < len; i++)
	{
		fct(arr[i]);
	}
}

template <typename T>
void iter(T const *arr, const size_t len, void (*fct) (T const &))
{
	for(size_t i = 0; i < len; i++)
	{
		fct(arr[i]);
	}
}
