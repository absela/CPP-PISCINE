/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 06:33:22 by absela            #+#    #+#             */
/*   Updated: 2022/12/27 08:48:40 by absela           ###   ########.fr       */
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
    delete [] zombies;
    return (0);
}