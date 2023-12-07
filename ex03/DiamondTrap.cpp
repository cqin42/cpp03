/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:08:07 by cqin              #+#    #+#             */
/*   Updated: 2023/12/07 13:59:15 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << " * Diamond Default constructor called." << std::endl;
	this->_name = name;
	this->_attackDamage = FragTrap::_attackDamage;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_hitPoints = FragTrap::_hitPoints;
}

DiamondTrap::DiamondTrap(const DiamondTrap &autre):  ClapTrap(autre), ScavTrap(autre), FragTrap(autre)
{
	std::cout << " * Diamond Copy constructor called." << std::endl;
	this->_name = autre.getName();
	this->_attackDamage = autre.getAttackDamage();
	this->_energyPoints = autre.getEnergyPoints();
	this->_hitPoints = autre.getHitPoints();
}
DiamondTrap DiamondTrap::operator=(const DiamondTrap &autre)
{
	std::cout << " * Diamond Copy assignment operator called" << std::endl;
	if (this != &autre)
	{
		this->_name = autre.getName();
		this->_attackDamage = autre.getAttackDamage();
		this->_energyPoints = autre.getEnergyPoints();
		this->_hitPoints = autre.getHitPoints();
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << " * Diamond Destructor called." << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << this->_name << " is DiamondTrap's name , ClapTrap name is " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
