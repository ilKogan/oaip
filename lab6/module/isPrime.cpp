#include <iostream>
#include <vector>
#include <list>
#include <algorithm> 
#include <sstream>

#define RADIX 10


bool isPrime(int number, int step = 2) {
	if (number == step) {
		return true;
	} else if (number % step != 0) {
		return  isPrime(number, step + 1);
	} else {
		return false;
	}
}
//узнать про масиивы и указатели
//list<int> convertNumberToArray(int number, list<int> state = list<int>()) {
//	int digit = number % RADIX;
//	number /= RADIX;
//	state.push_front(digit);
//
//	if (number < 9) {
//		state.push_front(number);
//		return state;
//	}
//	return convertNumberToArray(number, state);
//}
std::string revers(std::string const& s) {
	std::string rev(s.rbegin(), s.rend());
	return rev;
}

void convertNumberToArray(int number, int* state, int& size) {
	int digit = number % RADIX;
	number /= RADIX;
	state[size++] = digit;


	if (number < 9) {
		state[size++] = number;
		return;
	}

	return convertNumberToArray(number, state, size);
}

int convertArrayToNumber(int count, int state[], int result) {
	if (state[count] == state[0]) {
		return result;
	}

	result += state[count] * pow(10, --count);
	return convertArrayToNumber(count, state, result);
}


bool isSuperPrime(int number) {

	int size = 0;
	int* state = new int;
	int results = 0;
	

	convertNumberToArray(number, state, size);

	do {
		results = convertArrayToNumber(size, state, results);
		if (isPrime(results)) std::cout << results << std::endl;
	} while (std::next_permutation(state, state + size));

	return false;

}
