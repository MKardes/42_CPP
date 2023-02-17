/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:46:55 by mkardes           #+#    #+#             */
/*   Updated: 2023/02/17 14:39:33 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	private:
		T		*_data;
		size_t	_index;
	public:
		Array(): _index(0)
		{
			_data = new T();
		}

		Array(unsigned int n): _index(n)
		{
			_data = new T[n];
		}

		Array(const Array & copy): _index(copy.size())
		{
			this->_data = new T[this->_index];
			size_t i = 0;
			while (i <= _index)
			{
				this->_data[i] = copy._data[i];
				i++;
			}
		}

		Array& operator=(const Array& copy)
		{
        	if ( this != &copy )
			{
				delete this->_data;
        	    this->_data = new T[copy.size()];
        	    this->_index = copy._index;
				size_t	i = 0;
        	    while ( i < this->_index)
				{
        	        this->_data[i] = copy._data[i];
				}
        	}
        	return *this;
    	}

		size_t	size(void) const
		{
			return _index;
		}
		
		T & operator[](size_t index)
		{
			if (this->_index < index || index < 0)
				throw(Array::OutOfArrayException());
			return (_data[index]);
		}

		class OutOfArrayException: public std::exception
		{
			public:
				const char*	what() const throw()
				{
					return ("This index is out of range !!");
				}
		};
};

#endif
