/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:20:49 by mkardes           #+#    #+#             */
/*   Updated: 2023/02/16 14:20:50 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer has been constructed." << std::endl;
}

Serializer::Serializer(const Serializer & copy)
{
	*this = copy;
	std::cout << "Serializer's copy constructer called." << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "Serializer has been destructed." << std::endl;
}

Serializer &Serializer::operator=(const Serializer & copy)
{
	(void)copy;
	std::cout << "Serializer's copy assignment called." << std::endl;
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast< uintptr_t >(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return ( reinterpret_cast< Data* > (raw) );
}
