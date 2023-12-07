/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 23:19:36 by christine         #+#    #+#             */
/*   Updated: 2023/12/07 11:04:54 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name),_hitPoints(10),_energyPoints(10),_attackDamage(0)
{
	std::cout << " * ClapTrap Default constructor called" << std::endl;
	std::cout << name << " is created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << " * ClapTrap Destructor called" << std::endl;
	std::cout << this->_name << " is destroyed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &autre)
{
	std::cout << " * ClapTrap Copy constructor called" << std::endl;
	*this = autre;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &autre)
{
	std::cout << " * ClapTrap Copy assignment operator called" << std::endl;
	if (this != &autre)
	{
		this->_name = autre.getName();
		this->_hitPoints = autre.getHitPoints();
		this->_energyPoints = autre.getEnergyPoints();
		this->_attackDamage = autre.getAttackDamage();
	}
	return (*this);
}

std::string		ClapTrap::getName(void) const
{
	return(this->_name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return(this->_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return(this->_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return(this->_attackDamage);
}


void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		std::cout << this->_name << " attacks "
		<< target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	if (this->_hitPoints <= 0 )
		std::cout << this->_name << " can't attacks because " << target << " is already dead" << std::endl;
	if (this->_energyPoints <= 0)
		std::cout << this->_name << " can't attacks because no energy Points." << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < amount)
	{
		std::cout << this->_name << " take " << amount << " points of damage!" << std::endl;
		this->_hitPoints = 0;
	}
	else
	{
		this->_hitPoints -= amount;
		std::cout << this->_name << " take " << amount << " points of damage!" << std::endl;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		this->_hitPoints += amount;
		std::cout << this->_name << " be repaired " << amount << " hit points" << std::endl;
	}
	else
	{
		std::cout << "cannot be repaired because no energy points." << std::endl;
	}

}
