/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 19:50:38 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/25 20:50:24 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Point_HPP
# define Point_HPP
# include <iostream>
# include <new>
# include <string>
# include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(const float x1, const float y1);
		Point(const Point& other);
		~Point();
		Fixed getX() const;
		Fixed getY() const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif
