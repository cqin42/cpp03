/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:12:19 by cqin              #+#    #+#             */
/*   Updated: 2023/12/07 13:07:09 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		FragTrap(std::string name);
		~FragTrap();

		FragTrap(const FragTrap &autre);
		FragTrap operator=(const FragTrap &autre);

		void highFivesGuys(void);
};

#endif
