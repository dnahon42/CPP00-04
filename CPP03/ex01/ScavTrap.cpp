/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 19:03:42 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/26 19:33:03 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_name = "Default";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string name)
{
	std::cout << "ScavTrap Parametized constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	std::cout << "ScavTrap Assignment operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	static bool isGuarding = false;

	if (isGuarding == false)
	{
		std::cout << "ScavTrap " + this->_name + " is now in Gatekeeper mode !" << std::endl;
		isGuarding = true;
		return ;
	}
	else
		std::cout << "ScavTrap " + this->_name + " is already in Gatekeeper mode !" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_hit_points == 0)
		std::cout << "ScavTrap " + this->_name + " is dead !" << std::endl;
	else
	{
		if (this->_energy_points >= 1)
		{
			this->_energy_points--;
			std::cout << "ScavTrap " + this->_name + " attacks " + target << ", causing "
			<< this->_attack_damage << " points of damage! Energy Points remaining : "
			<< this->_energy_points << std::endl;
		}
		else
			std::cout << "ScavTrap " + this->_name + " has no Energy Points remaining." << std::endl;
	}
}