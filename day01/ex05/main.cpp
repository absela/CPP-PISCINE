/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 23:32:51 by absela            #+#    #+#             */
/*   Updated: 2023/01/02 02:30:05 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./Harl [DEBUG|INFO|WARN|ERROR]" << std::endl;
        return 1;
    }
    Harl harl;
    std::string Lev = av[1];
    harl.complain(Lev);
    return 0;
}