/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:17:38 by absela            #+#    #+#             */
/*   Updated: 2022/12/27 03:12:26 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "ContactBook.hpp"

int main()
{
    PhoneBook contact;
    std::string command;
    int i = -1;

    std::cout << "\n\n\t \x1b[31m ---- PHONEBOOK ---- \033[0m \n\n";
    std::cout << "\x1b[35m SUPPORTED COMMANDS:\n";
    std::cout << "* ADD\n* SEARCH\n* EXIT\n \033[0m \n\n";
    while (1)
    {
        std::cout << " Enter command: ";
        std::getline(std::cin , command);
        if (!(std::cin.eof()))
        {
            if (command == "ADD")
            {
                i++;
                if (i > 7)
                    i = 0;
                contact.addContact(&contact, i);
            }
            else if (command == "SEARCH")
                contact.searchContact(contact);
            else if (command == "EXIT")
                break ;
        }
        else
            break;
    }
    return (0);

}