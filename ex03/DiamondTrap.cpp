/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:08:07 by cqin              #+#    #+#             */
/*   Updated: 2023/12/06 14:26:14 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
DiamondTrap::~DiamondTrap();

DiamondTrap::DiamondTrap(const DiamondTrap &autre);
DiamondTrap DiamondTrap::operator=(const DiamondTrap &autre);

void DiamondTrap::whoAmI();
