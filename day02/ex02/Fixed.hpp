/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 08:12:21 by absela            #+#    #+#             */
/*   Updated: 2023/01/06 23:07:03 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

using namespace std;

class Fixed {
    private:
        int					fixed;
        static int const	fractionalBits = 8;
    public:
        Fixed(void);// constructor
        Fixed(int const n);// convert to fixed
        Fixed(float const n);// convert to fixed
        Fixed(Fixed const & src);// copy constructor
        ~Fixed(void);
        int			getRawBits(void) const;
        void		setRawBits(int const raw);
        float		toFloat(void) const;
        int			toInt(void) const;

        bool operator <(Fixed const &comp) const;
        bool operator >(Fixed const &comp) const;
        bool operator <=(Fixed const &comp) const;
        bool operator >=(Fixed const &comp) const;
        bool operator ==(Fixed const &comp) const;
        bool operator !=(Fixed const &comp) const;

        Fixed operator +(Fixed const &op) const;
        Fixed operator -(Fixed const &op) const;
        Fixed operator *(Fixed const &op) const;
        Fixed operator /(Fixed const &op) const;

        Fixed	operator ++(void);
        Fixed	operator ++(int);
        Fixed	operator --(void);
        Fixed	operator --(int);
        
        static Fixed& min(Fixed &a, Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& min(Fixed const &a, Fixed const &b);
        static const Fixed& max(Fixed const &a, Fixed const &b);
        
};

std::ostream &	operator<<(std::ostream &output, Fixed const &p);

#endif