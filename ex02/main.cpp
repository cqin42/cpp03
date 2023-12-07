/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:10:32 by cqin              #+#    #+#             */
/*   Updated: 2023/12/07 11:16:58 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main (void)
{
	FragTrap kk("kk");
	FragTrap kk_copy(kk);
	std::cout << kk.getEnergyPoints() << " Energy Points" << std::endl;
	std::cout << kk.getHitPoints() << " Hit Points" << std::endl;
	std::cout << kk.getAttackDamage() << " Attack Points" << std::endl;

	kk.takeDamage(50);
	std::cout << kk.getHitPoints() << std::endl;
	kk.highFivesGuys();
}
