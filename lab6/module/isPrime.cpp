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
void convertNumberToArray(int number, int* state, int& size) {
	int digit = number % RADIX;
	number /= RADIX;
	state[size++] = digit;
	

	if (number < 9) {
		state[size++] = number;
		return;
	}

	return convertNumberToArray(number,state, size);
}

bool isSuperPrime(int number) {
		
	int size = 0;
	int* state = new int;
	convertNumberToArray(number, state, size);
	

	do {
		//TODO:: Array of ints to number
		//TODO:: CHECK IS PRIME
		//
		std::cout << state[0] << state[1] <<std::endl;
		//isPrime(numbera)
	} while (std::next_permutation(state, state + size));

	return false;
	
}
