/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:10:32 by cqin              #+#    #+#             */
/*   Updated: 2023/12/07 10:54:30 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main (void)
{
	ScavTrap lol("lol");
	ScavTrap lol_copy(lol);
	std::cout << lol.getEnergyPoints() << " Energy Points" << std::endl;
	std::cout << "copy = " << lol_copy.getEnergyPoints() << " Energy Points" << std::endl;
	std::cout << lol.getHitPoints() << " Hits Points" <<  std::endl;
	std::cout << "copy = " << lol_copy.getHitPoints() << " Hits Points" << std::endl;
	std::cout << lol.getAttackDamage() << " Attack Damage" << std::endl;
	std::cout << "copy = " << lol_copy.getAttackDamage() << " Attack Damage" << std::endl;
	lol.attack("lala");
	lol.guardGate();
	std::cout << lol.getEnergyPoints() << std::endl;
	lol.takeDamage(50);
	std::cout << lol.getHitPoints() << std::endl;
	std::cout << "copy = " << lol_copy.getHitPoints() << std::endl;
}
