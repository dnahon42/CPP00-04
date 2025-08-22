/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:42:49 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/20 15:35:03 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

    int main(void)
    {
        Zombie* Zombie1;
        
        Zombie1 = newZombie("Zombie1");
        randomChump("Zombie2");
        delete(Zombie1);
    }