/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:42:53 by cqin              #+#    #+#             */
/*   Updated: 2023/12/05 18:03:59 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void):ClapTrap()
{
	this->_attackDamage = 20;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
}
ScavTrap::ScavTrap(const ScavTrap &autre)
{
}
ScavTrap ScavTrap::operator=(const ScavTrap &autre)
{
}

ScavTrap::~ScavTrap()
{
}

void ScavTrap::guardGate()
{
	std::cout << this->_name << " is now in Gate keeper mode." << std::endl;
}
