/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 06:33:22 by absela            #+#    #+#             */
/*   Updated: 2023/01/17 19:08:43 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main(void)
{
    Zombie *zombies;
    int N = 5;
    int i = -1;

    zombies = zombieHorde(N, "foo: ");
    while (++i < N)
        zombies[i].announce();
    // delete [] zombies;
    system("leaks Zombie");
    return (0);
}