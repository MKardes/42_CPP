/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:20:55 by mkardes           #+#    #+#             */
/*   Updated: 2023/02/20 15:21:05 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class   MutantStack: public std::stack<T>
{
    private:

    public:
        MutantStack<T>() {}
        MutantStack<T>(const MutantStack & copy) { *this = copy; }
        ~MutantStack<T>() {}
        MutantStack<T> &operator=(const MutantStack & copy) { (void)copy; return (*this); }

        typedef typename std::stack<T>::container_type::iterator iterator;
 
        iterator	begin( void ) { return this->c.begin(); }
        iterator	end( void ) { return this->c.end(); }

};

#endif
