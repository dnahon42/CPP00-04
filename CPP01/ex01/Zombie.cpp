/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:42:53 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/21 15:20:56 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string Zombie::getName() const
{
    return (_name);
}

void Zombie::setName(const std::string &name)
{
    this->_name = name;
}

void Zombie::announce()
{
    std::cout << _name + ": " + "BraiiiiiiinnnzzzZ..." << std::endl; 
}

Zombie::Zombie(std::string initial_name)
{
    _name = initial_name;
    std::cout << "Zombie: " + _name + " was created" << std::endl;
}

Zombie::Zombie()
{
    _name = "";
    std::cout << "Zombie: " + _name + " was created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie: " + _name + " was destroyed" << std::endl;
}
