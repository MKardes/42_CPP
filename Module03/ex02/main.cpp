/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:35:33 by mkardes           #+#    #+#             */
/*   Updated: 2022/12/21 15:35:34 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("Musab");
    ClapTrap b("Hans");
    ScavTrap c("Derived");
    FragTrap d("highFive");

    a.attack("Hans");
    b.takeDamage(3);
    a.beRepaired(3);
    c.attack("Musab");
    c.takeDamage(45);
    c.beRepaired(10);
    c.attack("Musab");
    c.takeDamage(25);
    c.guardGate();
    d.highFivesGuys();
}
