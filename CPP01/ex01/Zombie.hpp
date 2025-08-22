/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:42:52 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/21 16:08:44 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string _name;
    
    public:
    	Zombie(std::string initial_name);
    	Zombie(void);
	    ~Zombie(void);
        std::string getName() const;
        void setName(const std::string &name);
        void announce(void);

};

Zombie* zombieHorde(int N, std::string name);

#endif