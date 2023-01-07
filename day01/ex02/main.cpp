/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:31:29 by absela            #+#    #+#             */
/*   Updated: 2022/12/31 23:57:31 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;
    //print addresse 
    std::cout << &str << "\n";
    std::cout << ptr << "\n";
    std::cout << &ref << "\n";
    //print value
    std::cout << str << "\n";
    std::cout << *ptr << "\n";
    std::cout << ref << "\n";
}