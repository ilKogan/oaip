#include <iostream>
#include <iomanip>
#include "headers/vector2.h"

void Task6_2() {
	printf("\nTask 6.2\n");
	printf("\nFinding the distance between two points\n");

	vector2 m1, m2;
	float distance;

	std::cout << "\nEnter the value of x and y point m1\n";
	std::cin >> m1.x >> m1.y;
	std::cout << "Enter the value of x and y point m2\n";
	std::cin >> m2.x >> m2.y;

	distance = sqrt(pow((m2.x - m1.x), 2) + pow((m2.y - m1.y), 2));

	std::cout << "Distance :" << distance;
}