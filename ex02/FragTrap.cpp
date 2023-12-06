/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:08:46 by cqin              #+#    #+#             */
/*   Updated: 2023/12/06 13:54:43 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap Default constructor called." << std::endl;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_hitPoints = 100;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &autre):ClapTrap()
{
	std::cout << "Copy of FragTrap constructor called" << std::endl;
	*this = autre;
}
FragTrap FragTrap::operator=(const FragTrap &autre)
{
	if (this != &autre)
	{
		this->_name = autre.getName();
		this->_attackDamage = autre.getAttackDamage();
		this->_energyPoints = autre.getEnergyPoints();
		this->_hitPoints = autre.getHitPoints();
	}
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "High Five" << std::endl;
}
