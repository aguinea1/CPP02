/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 19:59:16 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/25 20:50:49 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0) 
{

}

Point::Point(const float x1, const float y1) : x(x1), y(y1) 
{

}

Point::~Point() 
{

}
Point::Point(const Point& other) : x(other.x), y(other.y)
{

}

Fixed Point::getY() const
{
	return  this->y;
}

Fixed Point::getX() const
{
	return this->x;
}

static Fixed sign(Point const& p1, Point const& p2, Point const& p3) 
{
    return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) -
           (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) 
{
    Fixed d1 = sign(point, a, b);
    Fixed d2 = sign(point, b, c);
    Fixed d3 = sign(point, c, a);

	//all the same sign = inside
    bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	//on the border
    if (d1 == 0 || d2 == 0 || d3 == 0)
        return false;

    return !(has_neg && has_pos);
}
