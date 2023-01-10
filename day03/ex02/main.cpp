/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 00:53:06 by absela            #+#    #+#             */
/*   Updated: 2023/01/10 01:06:49 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap frag("Frag");
    ScavTrap scav("Scav");
    frag.attack("me");
    scav.guardGate();
    frag.highFivesGuys();
    return 0;
}