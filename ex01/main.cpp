/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:10:32 by cqin              #+#    #+#             */
/*   Updated: 2023/12/06 13:16:33 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main (void)
{
	ScavTrap lol("lol");
	std::cout << lol.getEnergyPoints() << std::endl;
	std::cout << lol.getHitPoints() << std::endl;
	std::cout << lol.getAttackDamage() << std::endl;
	lol.attack("lala");
	lol.guardGate();
	std::cout << lol.getEnergyPoints() << std::endl;
	lol.takeDamage(50);
	std::cout << lol.getHitPoints() << std::endl;
}
