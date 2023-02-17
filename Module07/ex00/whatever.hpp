/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:08:19 by mkardes           #+#    #+#             */
/*   Updated: 2023/02/17 11:08:20 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

template <typename T>
void    swap(T & a, T & b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T min(T & a, T & b)
{
    return( (a < b) ? a : b);
}

template <typename T>
T max(T & a, T & b)
{
    return( (a > b) ? a : b);
}

#endif
