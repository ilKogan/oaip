#include "lab10.h"


void main() {

	int choice;
	std::cin >> choice;

	while (true) {
		switch (choice) {

		case 21: Task2_1();
			break;
		//case 22: Task2_2();
		//	break;
		//case 10: Task10();
		//	break;
		default: return;
			break;
		}
	}
}