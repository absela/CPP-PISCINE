/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 08:13:37 by absela            #+#    #+#             */
/*   Updated: 2023/01/10 01:58:21 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constractor called" << std::endl;
    this->_name = "";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "param constractor called" << std::endl;
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
    std::cout << "copy constractor called" <<std::endl;
    *this = obj;
}

ClapTrap::~ClapTrap(){
    std::cout << "Destractor" <<std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &objt)
{
    std::cout << "assingnement operator called" << std::endl;
    _name = objt._name;
    _hitPoints = objt._hitPoints;
    _energyPoints = objt._energyPoints;
    _attackDamage = objt._attackDamage;
    return *this;
}

void ClapTrap::attack(std::string const &taget)
{
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attack " << taget << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " take damage " << amount << " points of damage!" << std::endl;
        this->_hitPoints -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " be repaired " << amount << " points of damage!" << std::endl;
        this->_hitPoints += amount;
        this->_energyPoints--;
    }
}
