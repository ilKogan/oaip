#include <iostream>

bool isPrime(int number, int step = 2) 
{
	

	return  isPrime(number, step + 1);
}