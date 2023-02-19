#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

template < typename T >
void    easyfind( T& container, int value )
{
    if ( std::find( container.begin(), container.end(), value ) != container.end() )
        std::cout << "Found." << std::endl;
    else
        std::cout << "Not found." << std::endl;
}

#endif /* EASYFIND_HPP */
