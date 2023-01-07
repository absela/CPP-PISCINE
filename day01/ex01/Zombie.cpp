/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 06:31:37 by absela            #+#    #+#             */
/*   Updated: 2022/12/27 08:53:42 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie(void){
}

Zombie::~Zombie()
{
    std::cout << this->_name << "Zombie destroyed" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->_name << "Braiiiiiiinnnssss..." << std::endl;
}

void    Zombie::setZombieName(std::string name)
{
    this->_name = name;
}
