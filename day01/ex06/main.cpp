/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 05:41:10 by absela            #+#    #+#             */
/*   Updated: 2023/01/01 23:43:04 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	if (ac == 2)
		harl.complain(av[1]);
	else
		std::cout << "Usage: ./Harl [DEBUG|INFO|WARN|ERROR]" << std::endl;
	return (0);
}