/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:37:12 by mkardes           #+#    #+#             */
/*   Updated: 2022/12/21 15:37:13 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

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

    DiamondTrap ash( "Ash" );
    DiamondTrap ash2( ash );
    DiamondTrap ash3(".");

    ash.whoAmI();
    ash2.whoAmI();
    ash3 = ash;
    ash3.whoAmI();

    ash.attack( "the air" );
    ash.takeDamage( 10 );
    ash.beRepaired( 10 );

    return 0;
}
