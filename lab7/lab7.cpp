#include "lab7.h"


void main() {

	int choice;
	std::cin >> choice;
	while (true) {
		switch (choice) {

		case 4: Task4_12_1();
			break;
		case 5:	Task4_12_2();
			break;
		default: system("exit");
			break;
		}
	}
}