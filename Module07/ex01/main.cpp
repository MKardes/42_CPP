/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:18:08 by mkardes           #+#    #+#             */
/*   Updated: 2023/02/17 11:26:03 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int	arr[] = {1, 32, 12, 56, 99};
	iter(arr, 5, &print);
	std::cout << std::endl;

	iter(arr, 5, &add);

	iter(arr, 5, &print);
	std::cout << std::endl;

	char c_arr[] = {'A', 'B', 'C', 'D', 'E'};
	iter(c_arr, 5, &print);
    std::cout << std::endl;

	int i = 0;
	while(i < 32)
	{
    	iter(c_arr, 5, &add);
		i++;
	}

    iter(c_arr, 5, &print);
    std::cout << std::endl;

	std::string s_arr[] = {"Gel","Git","Kal","Don"};
    iter(s_arr, 4, &print);
	std::cout << std::endl;
	return (0);
}
