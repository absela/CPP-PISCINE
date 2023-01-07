/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 08:12:58 by absela            #+#    #+#             */
/*   Updated: 2023/01/07 09:32:03 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// int main()
// {
//     ClapTrap Obj("Anass");
//     Obj.attack("meryeme");
//     Obj.takeDamage(2);
//     Obj.beRepaired(2);
//     return 0;
// }

int main()
{
    ClapTrap Obj("Anass");
    ClapTrap Obj2(Obj);
    ClapTrap Obj3 = Obj;
    Obj.attack("meryeme");
    Obj.takeDamage(2);
    Obj.beRepaired(2);
    return 0;
}