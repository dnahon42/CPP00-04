/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:26:22 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/21 17:15:43 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon& weapon_type)
{
    _name = name;
    _weapon_type = &weapon_type;
}

HumanB::HumanB(std::string name)
{
    _name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon_type = &weapon;
}

void HumanB::attack()
{
    std::cout << _name + " attacks with their " + _weapon_type->getType() << std::endl;
}