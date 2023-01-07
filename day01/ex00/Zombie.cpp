/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 23:32:49 by absela            #+#    #+#             */
/*   Updated: 2023/01/02 01:56:42 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) 
{
}
void Zombie::setname(std::string name) {
    this->_name = name;
}

void Zombie::announce(void) {
    std::cout << this->_name << " Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << "Zombie destroyed" << std::endl;
}
