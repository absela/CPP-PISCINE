/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:17:05 by absela            #+#    #+#             */
/*   Updated: 2022/12/30 01:20:35 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "ContactBook.hpp"

PhoneBook::PhoneBook(void){
    this->count = 0;
}

PhoneBook::~PhoneBook(void){}

void Contact::setFirstName(std::string firstName)
{
    this->firstName = firstName;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}

void Contact::setNickname(std::string nickname)
{
    this->nickname = nickname;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
    this->darkestSecret = darkestSecret;
}

std::string _value_of(std::string buff) {
    
	std::string cmd = "";
    while(cmd.empty())
    {
    	std::cout << buff;
    	getline(std::cin, cmd);
    	if (std::cin.eof())
    	{
    		std::cout << "Thala..." << std::endl;
    		exit(0);
    	}
    }
	return cmd;
}

void PhoneBook::addContact(PhoneBook *contact, int i)
{

    contact->Contact[i].setFirstName(_value_of("Enter first name: "));
    contact->Contact[i].setLastName(_value_of("Enter last name: "));
    contact->Contact[i].setNickname(_value_of("Enter nickname: "));
    contact->Contact[i].setPhoneNumber(_value_of("Enter phone number: "));
    contact->Contact[i].setDarkestSecret(_value_of("Enter darkest secret: "));
    this->count++;
}

std::string Contact::getFirstName(void)
{
    return(this->firstName);
}

std::string Contact::getPhoneNumber(void)
{
    return(this->phoneNumber);
}

std::string Contact::getLastName(void)
{
    return(this->lastName);
}

std::string Contact::getNickname(void)
{
    return(this->nickname);
}

std::string Contact::getDarkestSecret(void)
{
    return(this->darkestSecret);
}

void PhoneBook::searchContact(PhoneBook contact)
{
    int i = 0;
    std::string tmp;

    std::cout << "|----------|----------|----------|----------|" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    while (i < this->count)
    {

        std::cout << "|         " << i << "|";
        if (contact.Contact[i].getFirstName().length() > 10)
            std::cout << contact.Contact[i].getFirstName().substr(0, 9) << "." << "|";
        else
            std::cout  << std::setw(10) << std::setfill(' ') << contact.Contact[i].getFirstName()  << "|";
        if (contact.Contact[i].getLastName().length() > 10)
            std::cout << contact.Contact[i].getLastName().substr(0, 9) << "." << "|";
        else
            std::cout << std::setw(10) << std::setfill(' ') << contact.Contact[i].getLastName()  << "|";
        if (contact.Contact[i].getNickname().length() > 10)
            std::cout << contact.Contact[i].getNickname().substr(0, 9) << "." << "|" << std::endl;
        else
            std::cout  << std::setw(10) << std::setfill(' ') << contact.Contact[i].getNickname() << "|" << std::endl;
        i++;
    }
    std::cout << "Enter index: ";
    std::getline(std::cin, tmp);
    i = 0;
    while (i < 8)
    {
        if (tmp == std::to_string(i))
        {
            std::cout << "First name: " << contact.Contact[i].getFirstName() << std::endl;
            std::cout << "Last name: " << contact.Contact[i].getLastName() << std::endl;
            std::cout << "Nickname: " << contact.Contact[i].getNickname() << std::endl;
            std::cout << "Phone number: " << contact.Contact[i].getPhoneNumber() << std::endl;
            std::cout << "Darkest secert: " << contact.Contact[i].getDarkestSecret() << std::endl;
        }
        i++;
    }
}