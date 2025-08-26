/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 19:23:57 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/26 15:44:34 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
  public:
	FragTrap(void);
	FragTrap(const std::string name);
	FragTrap(const FragTrap &other);
	~FragTrap(void);

	FragTrap &operator=(const FragTrap &other);
    
    void highFiveGuys();
	void attack(const std::string &target);
};

#endif