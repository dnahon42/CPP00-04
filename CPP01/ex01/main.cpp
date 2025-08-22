/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:42:49 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/21 15:38:28 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* Z;
    int N = 10;
    std::string name = "test";
    
    Z = zombieHorde(N, name);
    for (int i = 0; i < N; i++)
        Z->announce();
    delete[] Z;
}

