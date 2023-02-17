/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:17:43 by mkardes           #+#    #+#             */
/*   Updated: 2023/02/17 11:20:20 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T * arr, size_t length, void (*f)(T &))
{
	size_t	i = 0;
	while (i < length)
	{
		f(arr[i]);
		i++;
	}
}

template <typename T>
void	print(T & a)
{
	std::cout << a << " ";
}

template <typename T>
void    add(T & a)
{
    a++;
}

#endif
