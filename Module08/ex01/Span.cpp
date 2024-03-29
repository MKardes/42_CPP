/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:08:37 by mkardes           #+#    #+#             */
/*   Updated: 2023/02/20 11:08:38 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _size(0)
{
}

Span::Span(unsigned int n): _data(0), _size(n)
{

}

Span::Span(const Span & copy)
{
	*this = copy;
}

Span &Span::operator=(const Span & copy)
{
	this->_size = copy._size;
	this->_data = copy._data;
	return *this;
}

Span::~Span()
{
}

void	Span::addNumber(int num)
{
	if (this->_data.size() == this->_size)
		throw(Span::OutOfRangeException());
	this->_data.push_back(num);
	std::cout << num << " is added!" << std::endl;
}
void	Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if ( this->_data.size() > this->_size )
        throw (Span::OutOfRangeException());
    this->_data.insert(this->_data.end(), begin, end);
}

int	Span::shortestSpan()
{
	if (this->_data.size() <= 1)
		throw (SpanNumNotEnoughException());

	int 				result;
	std::vector<int>	tmp = this->_data;

	sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator it = tmp.begin() + 1;
	result = *(tmp.begin() + 1) - *(tmp.begin());

	while (it < tmp.end() - 1)
	{
		if (result > (*(it + 1) - *it))
			result = (*(it + 1) - *it);
		it++;
	}

	tmp.erase(tmp.begin(), tmp.end());
	return (result);
}

int	Span::longestSpan()
{
	if (this->_data.size() <= 1)
		throw (SpanNumNotEnoughException());

	std::vector<int>	tmp = this->_data;
	sort(tmp.begin(), tmp.end());
	int result = tmp.back() - *(tmp.begin());
	
	tmp.erase(tmp.begin(), tmp.end());
	return (result);
}

std::vector<int> &Span::getData()
{
	return (_data);
}

const char *Span::OutOfRangeException::what() const throw()
{
	return ("This field is full!!");
}

const char *Span::SpanNumNotEnoughException::what() const throw()
{
	return ("Numbers are not enough to provide a span!!");
}
