#include <iomanip>
#include <iostream>



void Task4() {
	int n, i, j;
	printf("Enter n: \n");

	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			printf("%5d", i * j);

			if (i == 1) {
				std::cout << std::endl;
				std::cout << std::setw(n * 5) << std::setfill("-") << tir << std::endl;
			}

			printf("\n");
		}

	}

}
