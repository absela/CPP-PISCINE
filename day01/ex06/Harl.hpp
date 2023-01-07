/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 05:41:13 by absela            #+#    #+#             */
/*   Updated: 2023/01/01 05:41:26 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl{
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
    private:
        void debug(void);
        void info(void);
        void warn(void);
        void error(void);
};

#endif