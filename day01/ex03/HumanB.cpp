/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 00:48:01 by absela            #+#    #+#             */
/*   Updated: 2023/01/02 03:32:43 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str){
    this->name = str;
}

HumanB::~HumanB(){
}

void HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}

void HumanB::attack(){
    if (this->weapon != NULL)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

