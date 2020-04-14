#include "Lab16.h"

int main() {

	while (true) {
		int choice = 0;
		std::cin >> choice;

		switch (choice) {
		case 0: std::cin >> choice;
			break;
		case 1: Task1();
			break;
		default: std::system("pause");
			break;
		}
	}
}
