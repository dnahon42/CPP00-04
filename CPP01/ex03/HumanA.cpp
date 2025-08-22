/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:26:16 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/21 17:15:44 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon_type)
{
    _name = name;
    _weapon_type = &weapon_type;
}

void HumanA::attack()
{
    std::cout << _name + " attacks with their " + _weapon_type->getType() << std::endl;
}