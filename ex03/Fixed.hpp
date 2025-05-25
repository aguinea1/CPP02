/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:04:49 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/25 19:36:30 by aguinea          ###   ########.fr       */
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
		static Fixed& min(Fixed& n, Fixed& n1);
		static const Fixed& min(const Fixed& n, const Fixed& n1);
		static Fixed& max(Fixed& n, Fixed& n1);
		static const Fixed& max(const Fixed& n, const Fixed& n1);
		Fixed& operator=(const Fixed& other);
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		Fixed operator++(int);
		Fixed& operator++();
		Fixed operator--(int);
		Fixed& operator--();
        ~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};
std::ostream& operator<<(std::ostream& out, const Fixed& Fixed);
#endif

