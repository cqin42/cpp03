/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:10:32 by cqin              #+#    #+#             */
/*   Updated: 2023/12/07 14:00:01 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main (void)
{
	DiamondTrap dd("dd");
	DiamondTrap dd_copy(dd);

	std::cout << dd.getEnergyPoints() << " Energy Points" << std::endl;
	std::cout << dd.getHitPoints() << " Hit Points" << std::endl;
	std::cout << dd.getAttackDamage() << " Attack Points" << std::endl;
	dd.attack("caca");
	dd.whoAmI();
}
