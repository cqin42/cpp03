/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:10:24 by cqin              #+#    #+#             */
/*   Updated: 2023/12/07 13:33:23 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public :
		DiamondTrap(std::string name);
		virtual ~DiamondTrap();

		DiamondTrap(const DiamondTrap &autre);
		DiamondTrap operator=(const DiamondTrap &autre);

		void whoAmI();
		void	attack(const std::string& target);

	private :
		std::string _name;
};

#endif
