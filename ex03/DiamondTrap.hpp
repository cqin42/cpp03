/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:10:24 by cqin              #+#    #+#             */
/*   Updated: 2023/12/06 14:26:54 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
	public :
		DiamondTrap(std::string name);
		~DiamondTrap();

		DiamondTrap(const DiamondTrap &autre);
		DiamondTrap operator=(const DiamondTrap &autre);

		void whoAmI();
}

