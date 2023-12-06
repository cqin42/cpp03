/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:58:09 by christine         #+#    #+#             */
/*   Updated: 2023/12/06 11:38:56 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public :
	
	ClapTrap(std::string name);
	~ClapTrap();

	ClapTrap(const ClapTrap &autre);
	ClapTrap& operator=(const ClapTrap &autre);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string		getName(void) const;
	unsigned int	getHitPoints(void) const;
	unsigned int	getEnergyPoints(void) const;
	unsigned int	getAttackDamage(void) const;


private :
	std::string _name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
};

#endif
