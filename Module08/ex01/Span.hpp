/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:08:43 by mkardes           #+#    #+#             */
/*   Updated: 2023/02/20 11:08:44 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

class Span
{
	private:
		std::vector<int>	_data;
		unsigned int		_size;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span & copy);
		~Span();
		Span &operator=(const Span & copy);

		void	addNumber(int num);
		void	addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();
		
		std::vector<int> &getData();

		class	OutOfRangeException: public std::exception
		{
			const char *what() const throw();
		};
		
		class	SpanNumNotEnoughException: public std::exception
		{
			const char *what() const throw();
		};
};

#endif
