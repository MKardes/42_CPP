/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:08:47 by mkardes           #+#    #+#             */
/*   Updated: 2023/02/20 11:08:48 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    {
        std::cout << "----------Test1----------" << std::endl;
        try 
        {
            Span    sp(8);
            sp.addNumber(1);
            sp.addNumber(10);
            sp.addNumber(20);
            sp.addNumber(31);
            sp.addNumber(43);
            sp.addNumber(56);
            sp.addNumber(70);
            sp.addNumber(85);
            std::cout << "Short: " << sp.shortestSpan() << \
            std::endl << "Long: " << sp.longestSpan() << std::endl ; 
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << std::endl; 
        }
    }
    {
        std::cout << "----------Test2----------" << std::endl;
        try 
        {    Span    sp(1);
            sp.addNumber(1);
            std::cout << "Short: " << sp.shortestSpan() << \
            std::endl << "Long: " << sp.longestSpan() << std::endl ;
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << std::endl; 
        }
    }
    {
        std::cout << "----------Test3----------" << std::endl;
        try
        {
            Span sp = Span(5);
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            std::cout << sp.shortestSpan() << std::endl; std::cout << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        std::cout << "----------Test4----------" << std::endl;
        try
        {
            std::vector<int>    v( 10000 );
            std::srand( time ( NULL ) );
            std::generate( v.begin(), v.end(), std::rand);

            Span span( v.size() );

            span.addNumbers( v.begin(), v.end() );

            /*unsigned long i = 0;
            std::vector<int> dat = span.getData();
            while(i < dat.size())
            {
                std::cout << dat.at(i) << std::endl;
                i++;
            }*/
            std::cout << "Longest span: " << span.longestSpan() << std::endl;
            std::cout << "Shortest span: " << span.shortestSpan() << std::endl;

        }
        catch ( std::exception& e )
        {
            std::cout << e.what() << std::endl; 
        }
    }
}
