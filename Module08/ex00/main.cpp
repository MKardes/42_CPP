/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:57:50 by mkardes           #+#    #+#             */
/*   Updated: 2023/02/20 10:57:55 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	{
		int                 arr[] = {1, 2, 3, 4, 5};
	    std::vector< int >      vect(arr, arr + 5);
	    std::list< int >        list(arr, arr + 5);

        std::cout << "---------Test1--------" << std::endl;
        std::cout << "in vect: 1, 2, 3, 4, 5" << std::endl;
        std::cout << "1: "; easyfind(vect, 1);
        std::cout << "2: "; easyfind(vect, 2);
        std::cout << "3: "; easyfind(vect, 3);
        std::cout << "4: "; easyfind(vect, 4);
        std::cout << "5: "; easyfind(vect, 5);
        std::cout << "6: "; easyfind(vect, 6);
        std::cout << "in list: 1, 2, 3, 4, 5" << std::endl;
        std::cout << "1: "; easyfind(list, 1);
        std::cout << "2: "; easyfind(list, 2);
        std::cout << "3: "; easyfind(list, 3);
        std::cout << "4: "; easyfind(list, 4);
        std::cout << "5: "; easyfind(list, 5);
        std::cout << "6: "; easyfind(list, 6);
	}
	{
		int                 arr[] = {1, 2, 3, 4, 5};
	    std::vector< int >      vect(arr + 1, arr + 5);

        std::cout << "---------Test2--------" << std::endl;
        std::cout << "in vect: 2, 3, 4, 5" << std::endl;
        std::cout << "1: "; easyfind(vect, 1);
        std::cout << "2: "; easyfind(vect, 2);
        std::cout << "3: "; easyfind(vect, 3);
        std::cout << "4: "; easyfind(vect, 4);
        std::cout << "5: "; easyfind(vect, 5);
        std::cout << "6: "; easyfind(vect, 6);
        std::cout <<"\nLet's push 1 to our vector!" << std::endl;
        std::cout << "in vect: 1, 2, 3, 4, 5" << std::endl;
        vect.push_back(1);
        std::cout << "1: "; easyfind(vect, 1);
        std::cout << "2: "; easyfind(vect, 2);
        std::cout << "3: "; easyfind(vect, 3);
        std::cout << "4: "; easyfind(vect, 4);
        std::cout << "5: "; easyfind(vect, 5);
        std::cout << "6: "; easyfind(vect, 6);
	}
}
