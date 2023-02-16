/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:18:08 by mkardes           #+#    #+#             */
/*   Updated: 2023/02/16 14:20:31 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	if (std::rand() % 3 == 0)
		return (new A);
	else if (std::rand() % 3 == 1)
		return (new B);
	else
		return (new C);
}

void    identify( Base* p ) {
    if ( dynamic_cast< A* >( p ) )
        std::cout << "A" << std::endl;
    else if ( dynamic_cast< B* >( p ) )
        std::cout << "B" << std::endl;
    else if ( dynamic_cast< C* >( p ) )
        std::cout << "C" << std::endl;
    else
        std::cout << "unknown" << std::endl;
}

void    identify( Base& p ) {
    try
	{
        A& a = dynamic_cast< A& >( p );
        std::cout << "A" << std::endl;
        (void)a;
    }
	catch(const std::exception& e)
	{
	}
    try
	{
        B& b = dynamic_cast< B& >( p );
        std::cout << "B" << std::endl;
        (void)b;
    }
	catch( const std::exception& e )
	{
	}
    try
	{
        C& c = dynamic_cast< C& >( p );
        std::cout << "C" << std::endl;
        (void)c;
    }
	catch( const std::exception& e )
	{
	}
}

int main()
{
	{
		Base*   a = generate();
    	Base*   b = generate();
    	Base*   c = generate();
    	Base*   d = generate();
		Base*	x = new Base();


    	std::cout << std::endl <<"a* = "; identify( a );
    	std::cout << "a& = "; identify( *a ); std::cout << std::endl;

    	std::cout << "b* = "; identify( b );
    	std::cout << "b& = "; identify( *b ); std::cout << std::endl;

    	std::cout << "c* = "; identify( c );
    	std::cout << "c& = "; identify( *c ); std::cout << std::endl;

    	std::cout << "d* = "; identify( d );
    	std::cout << "d& = "; identify( *d ); std::cout << std::endl;

		std::cout << "x* = "; identify( x ); std::cout  << std::endl;

    	delete a;
    	delete b;
    	delete c;
    	delete d;
		delete x;
	}
	{
		Base * a = new A();
    	Base * b = new B();
    	Base * c = new C();
    	Base * base1 = new Base();

		std::cout  << "*******************" << std::endl;
		std::cout  << "Test for (*)pointer" << std::endl << std::endl;
    	std::cout  << "A to A : " ;
    	if (dynamic_cast< A* > (a))
        	std::cout << "Correct" << std::endl;
    	else
        	std::cout << "Incorrect" << std::endl;

    	std::cout  << "A to B : " ;
    	if (dynamic_cast< B* > (a))
        	std::cout << "Correct" << std::endl;
    	else
        	std::cout << "Incorrect" << std::endl;

    	std::cout  << "A to Base : " ;
    	if (dynamic_cast< Base* > (a))
       		std::cout << "Correct" << std::endl;
    	else
    	    std::cout << "Incorrect" << std::endl;

		std::cout << std::endl << "*********************" << std::endl;
		std::cout  << "Test for (&)reference" << std::endl << std::endl;

		try
		{
			std::cout  << "A to A : reference  " ;
			(void)dynamic_cast< A& > (*a);
            std::cout << "Correct" << std::endl;
		}
        catch(const std::exception& e)
		{
            std::cout << "Incorrect" << std::endl;
		}
		try
        {
			std::cout  << "A to Base : reference  " ;
            (void)dynamic_cast< Base& > (*a);
            std::cout << "Correct" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << "Incorrect" << std::endl;
        }
		try
        {
            std::cout  << "A to B : reference  " ;
            (void)dynamic_cast< B& > (*a);
            std::cout << "Correct" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << "Incorrect" << std::endl;
        }

		delete a;
        delete b;
        delete c;
        delete base1;
	}	
    return (0);
}
