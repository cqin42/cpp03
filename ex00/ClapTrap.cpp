/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 23:19:36 by christine         #+#    #+#             */
/*   Updated: 2023/12/04 23:24:39 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): this->_name = name;
{
	std::cout << "Constructor Called" << std::endl;
}

~ClapTrap::ClapTrap()
{
	std::cout << "Destructor Called" << std::endl;
}
