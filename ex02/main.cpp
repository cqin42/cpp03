/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:10:32 by cqin              #+#    #+#             */
/*   Updated: 2023/12/06 13:54:36 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main (void)
{
	FragTrap kk("kk");
	std::cout << kk.getEnergyPoints() << std::endl;
	std::cout << kk.getHitPoints() << std::endl;
	std::cout << kk.getAttackDamage() << std::endl;

	kk.takeDamage(50);
	std::cout << kk.getHitPoints() << std::endl;
	kk.highFivesGuys();
}
