/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:30:50 by cqin              #+#    #+#             */
/*   Updated: 2023/12/06 12:35:30 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &autre);
		ScavTrap operator=(const ScavTrap &autre);
		~ScavTrap();

		void attack(const std::string& target);
		void guardGate();

};

#endif
