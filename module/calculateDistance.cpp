#include <iostream>
#include "Point.h"

float calculateDistance(Point dot1,Point dot2) 
{
	float distance = sqrt(pow((dot2.x - dot1.x), 2) + pow((dot2.y - dot1.y), 2));
	return distance;
}


