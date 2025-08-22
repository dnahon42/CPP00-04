/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:03:51 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/21 17:08:42 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon* _weapon_type;
  
    public:
        HumanB(std::string name, Weapon& _weapon_type);
        HumanB(std::string name);
        void setWeapon(Weapon &weapon);
        void attack(void);
};

#endif