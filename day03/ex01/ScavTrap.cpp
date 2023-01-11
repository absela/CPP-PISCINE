/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 00:34:59 by absela            #+#    #+#             */
/*   Updated: 2023/01/10 04:59:01 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    std::cout << "ScavTrap param constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &obj) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = obj;
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destractor" <<std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &objt)
{
    std::cout << "ScavTrap assingnement operator called" << std::endl;
    this->_name = objt._name;
    this->_hitPoints = objt._hitPoints;
    this->_energyPoints = objt._energyPoints;
    this->_attackDamage = objt._attackDamage;
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode" << std::endl;
}

