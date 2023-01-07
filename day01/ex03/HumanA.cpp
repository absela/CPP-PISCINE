/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 00:49:57 by absela            #+#    #+#             */
/*   Updated: 2022/12/31 04:09:58 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon& lol): lol(lol){
    this->name = str;
}

HumanA::~HumanA(){
}

void HumanA::attack() const
{
    std::cout << this->name << " attacks with their " ;
    std::cout << this->lol.getType();
    std::cout << std::endl;
}
