/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 15:43:52 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/26 16:31:38 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
	this->_name = "Default";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(const std::string name)
{
	std::cout << "ClapTrap Parametized constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	std::cout << "ClapTrap Assignment operator called" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_hit_points == 0)
		std::cout << "ClapTrap " + this->_name + " is dead !" << std::endl;
	else
	{
		if (this->_energy_points >= 1)
		{
			this->_energy_points--;
			std::cout << "ClapTrap " + this->_name + " attacks " + target << ", causing "
			<< this->_attack_damage << " points of damage! Energy Points remaining : "
			<< this->_energy_points << std::endl;
		}
		else
			std::cout << "ClapTrap " + this->_name + " has no Energy Points remaining." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points == 0)
		std::cout << "ClapTrap " + this->_name + " is dead !" << std::endl;
	else
	{
		if (amount > this->_hit_points)
		{
			this->_hit_points = 0;
			std::cout << "ClapTrap " + this->_name + " has died !" << std::endl;
			return ;
		}
		else
			this->_hit_points -= amount;
		std::cout << "ClapTrap " + this->_name + " took " << amount << " damage and now has " << this->_hit_points << " hit points!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points == 0)
		std::cout << "ClapTrap " + this->_name + " is dead !" << std::endl;
	else
	{
		if (this->_energy_points >= 1)
		{
			this->_hit_points += amount;
			this->_energy_points--;
			std::cout << "ClapTrap " + this->_name + " has been repaired by " << amount 
			<< " hit points and now has " << this->_hit_points << " hit points ! Energy Points remaining : "
			<< this->_energy_points << std::endl;
		}
		else
			std::cout << "ClapTrap " + this->_name + " has no Energy Points remaining." << std::endl;
	}
}