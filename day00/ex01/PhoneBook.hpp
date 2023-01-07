/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:17:29 by absela            #+#    #+#             */
/*   Updated: 2022/12/30 01:19:21 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "ContactBook.hpp"

class PhoneBook {
    private:
       Contact Contact[8];
       int count;
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void addContact(PhoneBook *contact, int i);
        void searchContact(PhoneBook contact);
};

#endif