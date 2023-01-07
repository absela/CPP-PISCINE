/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 00:46:22 by absela            #+#    #+#             */
/*   Updated: 2023/01/02 02:38:06 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str){
    this->type = str;
}

Weapon::~Weapon(){
}

std::string Weapon::getType() const
{
    return this->type;
}

void Weapon::setType(std::string str){
    this->type = str;
}
