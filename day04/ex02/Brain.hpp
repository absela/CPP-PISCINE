/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 23:54:30 by absela            #+#    #+#             */
/*   Updated: 2023/01/12 01:14:07 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
    public:
        Brain();
        ~Brain();
        Brain(Brain const &src);
        const std::string getideas(int i);

        Brain & operator= (Brain const &rhs);

    private:
        std::string _ideas[100];
};

#endif