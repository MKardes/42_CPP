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
    DiamondTrap has( "Hasan" );
    DiamondTrap hasr( has );
    DiamondTrap han("Hans");

    has.whoAmI();
    hasr.whoAmI();
    han = hasr;
    han.whoAmI();

    has.attack( "the air" );
    has.takeDamage( 25 );
    has.beRepaired( 10 );

    return 0;
}
