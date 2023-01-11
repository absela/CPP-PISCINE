/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 08:12:58 by absela            #+#    #+#             */
/*   Updated: 2023/01/11 01:14:00 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap Obj("Anass");
    Obj.attack("meme");
    Obj.takeDamage(1);
    Obj.beRepaired(2);
    return 0;
}