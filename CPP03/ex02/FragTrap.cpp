/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 19:23:56 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/26 16:31:10 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_name = "Default";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const std::string name)
{
	std::cout << "FragTrap Parametized constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	std::cout << "FragTrap Assignment operator called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFiveGuys()
{
	std::cout << "FragTrap " + this->_name + "wants to do a highFive !" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (this->_hit_points == 0)
		std::cout << "FragTrap " + this->_name + " is dead !" << std::endl;
	else
	{
		if (this->_energy_points >= 1)
		{
			this->_energy_points--;
			std::cout << "FragTrap " + this->_name + " attacks " + target << ", causing "
			<< this->_attack_damage << " points of damage! Energy Points remaining : "
			<< this->_energy_points << std::endl;
		}
		else
			std::cout << "FragTrap " + this->_name + " has no Energy Points remaining." << std::endl;
	}
}