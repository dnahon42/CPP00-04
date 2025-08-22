/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:42:52 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/20 15:33:10 by dnahon           ###   ########.fr       */
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
	    ~Zombie(void);
        std::string getName() const;
        void announce(void);

};

Zombie* newZombie(std::string name);
void randomChump(std::string name); 

#endif