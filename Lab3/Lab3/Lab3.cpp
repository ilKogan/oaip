// Lab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <map>
#include <string>
#include <iomanip>
#include <conio.h>

using namespace std;


namespace lab3
{	

	void lab3_2()
	{
		printf("Task 2"); 
		cout << endl;

		float x = 3, y;
		y = x * x + sin(x);

		printf("y = %f", y);

		_getch();
		cout << endl;
	}
	void lab3_3()
	{
		printf("Task 3"); 
		cout << endl;

		double
			t, u,
			k = 4,
			a = 4.1,
			x = 5e-5;

		t = 2 * tan(k) / a + log(3 + x) + exp(x);
		u = sqrt(t + 1) - sin(x) * cos(t);

		printf("t = %f", t); 
		cout << endl;
		printf("u = %f", u);
		cout << endl;

		_getch();
	}
	void lab3_4()
	{
		printf("Task 4"); 
		cout << endl;
		printf("Номер задачи выбрал первый из таблицы"); 
		cout << endl;

		double
			t, u,
			k = 4,
			x = 2e-4,
			a = 8.1;

		t = 2 * k / a + log(2 + x);
		u = sqrt(k - 1) / (t + 1);

		printf("t = %f", t); 
		cout << endl;
		printf("u = %f", u);
		cout << endl;

		_getch();

	}
	void lab3_5()
	{
		printf("Task 5"); 
		cout << endl;
		printf("к прошлому номеру прибавил 3 и это 4 задача из таблицы"); 
		cout << endl;

		double
			p,
			q,
			t = 6,
			y = -1.2,
			x = 0.4e6;

		p = 2.6 * t + cos(y / (3 * x + y));
		q = sin(t) / cos(t);

		printf("p = %f", p);
		cout << endl;
		printf("q = %f", q);
		cout << endl;

		_getch();
	}
}

int main()
{
	setlocale(LC_CTYPE, "Russian");

	lab3::lab3_2();
	lab3::lab3_3();
	lab3::lab3_4();
	lab3::lab3_5();

}


