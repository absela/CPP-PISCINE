/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 00:53:24 by absela            #+#    #+#             */
/*   Updated: 2023/01/10 01:03:37 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap param constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &obj)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = obj;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destractor" <<std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const &objt)
{
    std::cout << "FragTrap assingnement operator called" << std::endl;
    this->_name = objt._name;
    this->_hitPoints = objt._hitPoints;
    this->_energyPoints = objt._energyPoints;
    this->_attackDamage = objt._attackDamage;
    return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->_name << " high fives" << std::endl;
}