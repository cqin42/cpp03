/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:10:32 by cqin              #+#    #+#             */
/*   Updated: 2023/12/07 14:04:41 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap gg("gg");
	ClapTrap ii("ii");

	std::cout << gg.getName() << " have " << gg.getEnergyPoints() << " energy points" << std::endl;
	gg.attack("ii");
	std::cout << gg.getName() << " have " << gg.getEnergyPoints() << " energy points" << std::endl;
	std::cout << gg.getName() << " have " << gg.getHitPoints() << " hit points" << std::endl;
	gg.takeDamage(11);
	std::cout << gg.getName() << " have " << gg.getHitPoints() << " hit points" << std::endl;
	gg.beRepaired(3);
	std::cout << gg.getName() << " have " << gg.getHitPoints() << " hit points" << std::endl;
	std::cout << gg.getName() << " have " << gg.getEnergyPoints() << " energy points" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	for (int i = 0; i < 10; i++)
		gg.attack("ii");
	std::cout << "------------------------------------------" << std::endl;
	std::cout << gg.getName() << " have " << gg.getEnergyPoints() << " energy points" << std::endl;
	std::cout << gg.getName() << " have " << gg.getHitPoints() << " hit points" << std::endl;
	gg.attack("ii");
	gg.beRepaired(3);
	std::cout << gg.getName() << " have " << gg.getEnergyPoints() << " energy points" << std::endl;
	std::cout << gg.getName() << " have " << gg.getHitPoints() << " hit points" << std::endl;

}
