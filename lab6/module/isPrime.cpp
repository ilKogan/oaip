#include <iostream>
#include <vector>

#define PERMUTATION(a,b,c) (a * 100) + (b * 10) + c;

bool isPrime(int number, int step = 2) {
	if (number == step) {
		return true;
	} else if (number % step != 0) {
		return  isPrime(number, step + 1);
	} else {
		return false;
	}
}

bool isSuperPrime(int numbers) {
	int size = 1;
	int n1, n2, n3, n4;
	int num;

	if (numbers <= 9) {
		size = 1;
	} else if (numbers <= 99) {
		size = 2;
	} else if (numbers <= 999) {
		size = 3;
	}


	if (isPrime(numbers) && size == 1) {
		return true;
	}
	if (isPrime(numbers) && size == 2) {
		n1 = numbers / 10;
		n2 = numbers % 10; std::cout << " n1-" << n1 << " n2-" << n2 << " num-" << numbers;
		num = (n2 * 10) + n1; std::cout << "-and-" << num << std::endl;
		if (isPrime(num)) {
			return true;
		}
	}
	if (isPrime(numbers) && size == 3) {
		n1 = numbers / 100;
		n2 = (numbers / 10) % 10;
		n3 = numbers % 10;

		num = PERMUTATION(n1, n3, n2);
		if (isPrime(num)) {
			num = PERMUTATION(n2, n3, n1);
			if (isPrime(num)) {
				num = PERMUTATION(n2, n1, n3);
				if (isPrime(num)) {
					num = PERMUTATION(n3, n2, n1);
					if (isPrime(num)) {
						num = PERMUTATION(n3, n1, n2);
						if (isPrime(num)) {
							return true;
						}
					}
				}
			}
		}
	}

}
