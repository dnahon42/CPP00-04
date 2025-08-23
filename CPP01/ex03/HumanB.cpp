/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:26:22 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/22 20:48:07 by dnahon           ###   ########.fr       */
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
    _weapon_type = NULL;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon_type = &weapon;
}

void HumanB::attack()
{
    if (_weapon_type)
        std::cout << _name + " attacks with their " + _weapon_type->getType() << std::endl;
    else
        std::cout << _name + " attacks with nothing" << std::endl;
}