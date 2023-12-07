/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:42:53 by cqin              #+#    #+#             */
/*   Updated: 2023/12/07 11:04:35 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << " * ScavTrap Default constructor called." << std::endl;
	this->_attackDamage = 20;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
}
ScavTrap::ScavTrap(const ScavTrap &autre):ClapTrap(autre)
{
	std::cout << " * ScavTrap Copy constructor called" << std::endl;
	this->_name = autre.getName();
	this->_attackDamage = autre.getAttackDamage();
	this->_energyPoints = autre.getEnergyPoints();
	this->_hitPoints = autre.getHitPoints();
}
ScavTrap ScavTrap::operator=(const ScavTrap &autre)
{
	std::cout << " * ScavTrap Copy assignment operator called" << std::endl;
	if (this != &autre)
	{
		this->_name = autre.getName();
		this->_attackDamage = autre.getAttackDamage();
		this->_energyPoints = autre.getEnergyPoints();
		this->_hitPoints = autre.getHitPoints();
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << " * ScavTrap Destructor called." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << this->_name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;

		std::cout << this->_name << " of ScavTrap attacks "
		<< target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	if (this->_hitPoints <= 0 )
		std::cout << this->_name << " of ScavTrap can't attacks because " << target << " is already dead" << std::endl;
	if (this->_energyPoints <= 0)
		std::cout << this->_name << " of ScavTrap can't attacks because no energy Points." << std::endl;
}
