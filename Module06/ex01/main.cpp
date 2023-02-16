/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:20:57 by mkardes           #+#    #+#             */
/*   Updated: 2023/02/16 14:20:59 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	/*
	int		a = 12;
	int*	b = &a;
	int**	c = &b;

	uintptr_t ptr1 = reinterpret_cast<uintptr_t> (b);
	uintptr_t ptr2 = reinterpret_cast<uintptr_t> (c);
	std::cout << ptr1 << std::endl;
	std::cout << ptr2 << std::endl;
	std::cout << *(reinterpret_cast<int *> (ptr1)) << std::endl;
	std::cout << **(reinterpret_cast<int **> (ptr2)) << std::endl;

	*/
	Data ptr;
	ptr.a = 12;
	ptr.b = 'a';

	uintptr_t intprt = Serializer::serialize(&ptr);

	std::cout << "Int value: " << (Serializer::deserialize(intprt))->a <<" Char value: " << (Serializer::deserialize(intprt))->b << std::endl;
}
