/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 06:11:58 by absela            #+#    #+#             */
/*   Updated: 2023/01/06 23:04:37 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed(void); // constructor
        Fixed(Fixed const & src); // copy constructor
        Fixed(int const n); // convert to fixed
        Fixed(float const n);// convert to fixed
        ~Fixed(void);
        /*operateur overload*/
        Fixed &		operator=(Fixed const & rhs);

        int			getRawBits(void) const;
        void		setRawBits(int const raw);

        float		toFloat(void) const; // convert to float
        int			toInt(void) const; // convert to int

    private:
        int					fixed;
        static int const	fractionalBits;
};

std::ostream &		operator<<(std::ostream &output, Fixed const &i);

#endif