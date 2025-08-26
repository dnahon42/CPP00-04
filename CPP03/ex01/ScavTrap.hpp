/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:54:57 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/26 18:57:36 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
	ScavTrap(void);
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &other);
	~ScavTrap(void);

	ScavTrap &operator=(const ScavTrap &other);

	void guardGate();
	void attack(const std::string &target);
};

#endif