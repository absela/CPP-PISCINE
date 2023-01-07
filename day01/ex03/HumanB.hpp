/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 00:53:26 by absela            #+#    #+#             */
/*   Updated: 2022/12/28 03:22:45 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    private :
    std::string name;
    Weapon *weapon;

    public :
    HumanB(std::string str);
    ~HumanB();
    void attack();
    void setWeapon(Weapon &weapon);

};

#endif