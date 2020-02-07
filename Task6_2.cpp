#include <iostream>
#include <iomanip>
#include "module/Point.h"
#include "module/calculateDistance.h"

void Task6_2() {
	printf("\nTask 6.2\n");
	printf("\nFinding the distance between two points\n");

	Point m1, m2;

	std::cout << "\nEnter the value of x and y point m1\n";
	std::cin >> m1.x >> m1.y;
	std::cout << "Enter the value of x and y point m2\n";
	std::cin >> m2.x >> m2.y;

	std::cout << "Distance :" << calculateDistance(m1, m2);;
}