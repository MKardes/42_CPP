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

		void	change()
		{
			this->_data.pop_back();
		}
		std::vector<int> &getData()
		{
			return (_data);
		}

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
