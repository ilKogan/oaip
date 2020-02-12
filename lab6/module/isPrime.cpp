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
std::string revers(std::string const& s) 
{
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

	return convertNumberToArray(number,state, size);
}

int convertArrayToNumber(int count,int state[],int size,std::string fullnumber)
{
	fullnumber = (fullnumber + std::to_string(state[count++]));
	if (size == count) 
	{	
		fullnumber = revers(fullnumber);
		return std::stoi(fullnumber);
	}
	return convertArrayToNumber(count,state,size,fullnumber);
}


bool isSuperPrime(int number) {
		
	int size = 0;
	int* state = new int;
	int result;

	convertNumberToArray(number, state, size);
	
	do {
		//TODO:: Array of ints to number
		//TODO:: CHECK IS PRIME
		/*std::cout << state[0] << state[1] <<state[3]<<std::endl*/
		std::string fullnumber = "";

		result = convertArrayToNumber(0,state,size,fullnumber);
		if (isPrime(result)) {
			std::cout << result << std::endl;
		}

	} while (std::next_permutation(state, state + size));

	return false;
	
}
