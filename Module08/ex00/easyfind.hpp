#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <array>
# include <tuple>

template <typename T>
void    easyfind(T & a, int x)
{
    std::cout << a.at(3) << " "<< x << std::endl;
    std::iterator it = std::find(a.begin(), a.end(), x);
}

#endif /* EASYFIND_HPP */
