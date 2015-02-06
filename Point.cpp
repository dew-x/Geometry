#include "Point.h"


Point::Point() : coord(0.0f,0.0f,0.0f)
{
}


Point::~Point()
{
}

void Point::setCoord(const float &x, const float &y, const float &z) {
	coord = glm::vec3(x, y, z);
	return;
}

float Point::distanceToPoint(const Point& q) {
	return glm::length(coord - q.coord);
}

Point Point::pointInSegment(const Point& q, const float& alfa) {
	Point pp;
	pp.coord = coord*(1 - alfa) + alfa*q.coord;
	return pp;
}

std::ostream &operator<<(std::ostream &os, Point const &p) {
	return os << "(" << p.coord.x << ", " << p.coord.y << ", " << p.coord.z << ")" << std::endl;
}
