/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:34:09 by mkardes           #+#    #+#             */
/*   Updated: 2022/12/21 15:34:10 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Musab");
    ClapTrap b("Hans");

    a.attack("Hans");
    b.takeDamage(3);
    a.beRepaired(3);
    a.attack("Hans");
    b.takeDamage(7);
}
