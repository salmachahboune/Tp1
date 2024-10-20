#include "Point.h"
#include<iostream>
#include <cmath>

Point::Point(double x, double y) :x(x), y(y)
{}

void Point::afficher()
{
 std::cout << "x=" << this->x << " y=" << this->y;

}

void Point::TranslatePoint(double x, double y)
{
	this->x = x;
	this->y = y;
}

bool Point::operator==(const Point& P) const
{
	return (x == P.x) && (y == P.y);
}

double Point::distance(const Point& P) const
{
	return sqrt((this->x - P.x) * (this->x - P.x) +
		(this->y - P.y) * (this->y - P.y));
}


