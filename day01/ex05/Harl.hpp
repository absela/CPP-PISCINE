/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 23:36:20 by absela            #+#    #+#             */
/*   Updated: 2022/12/31 23:36:24 by absela           ###   ########.fr       */
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