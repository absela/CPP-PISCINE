/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 22:54:53 by absela            #+#    #+#             */
/*   Updated: 2022/12/26 01:24:44 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *Zombie = newZombie("Foo: ");
    Zombie->announce(); 
    delete Zombie;

    randomChump("Foo2: ");
    return 0;
}