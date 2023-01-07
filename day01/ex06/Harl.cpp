/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 05:41:16 by absela            #+#    #+#             */
/*   Updated: 2023/01/02 02:31:34 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
    std::cout << "DEBUG: " << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "INFO: " << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warn(void)
{
    std::cout << "WARN: " << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "ERROR: " << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    typedef void (Harl::*HarlFunc)(void);
    HarlFunc fornc[4] = {&Harl::debug, &Harl::info, &Harl::warn, &Harl::error};
    int i;
    std::string levels[4] = {"DEBUG", "INFO", "WARN", "ERROR"};
    for (i = 0; i < 4 && level != levels[i]; i++){}
        switch (i)
        {
            case 0:
                (this->*fornc[i])();
                i++;
            case 1:
                (this->*fornc[i])();
                i++;
            case 2:
                (this->*fornc[i])();
                i++;
            case 3:
                (this->*fornc[i])();
                break;
            default:
			    std::cout<<"[ Probably complaining about insignificant problems ]"<< std::endl;
		    break;
        }
}