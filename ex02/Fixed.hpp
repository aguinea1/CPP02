/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:04:49 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/22 13:57:05 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
# define Fixed_HPP
# include <iostream>
# include <new>
# include <string>

class Fixed
{
	private:
		int	store;
		static const int frac_bits = 8;
	public:

		Fixed();
		Fixed(const int num);
		Fixed(const float pi);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
        ~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};
std::ostream& operator<<(std::ostream& out, const Fixed& Fixed);
#endif

