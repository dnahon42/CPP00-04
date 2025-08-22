/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:25:58 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/21 16:56:17 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
    _type = type;
    std::cout << "Weapon was created with type : " + _type << std::endl;
}

std::string Weapon::getType() const
{
    return (_type);
}

void Weapon::setType(const std::string &type)
{
    this->_type = type;
}
