#include <iostream>
#include "Point.h"

void main() {
	Point p, q, r;
	
	// Test Points
	float alfa = 0.5;
	float x = 0, y = 0.1, z = -2;
	p.setCoord(x, y, z);

	for (int i = 0; i < 11; ++i) {
		q.setCoord(i, y, z);
		if (p.distanceToPoint(q) > 5) {
			std::cout << q << std::endl;
			break;
		}
	}
	r = p.pointInSegment(q, alfa);
	std::cout << r << std::endl;
	system("PAUSE");
}