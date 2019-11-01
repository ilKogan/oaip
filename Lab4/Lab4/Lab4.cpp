
#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <map>

using namespace std;

namespace printlab
{
	void PrintAnswer(string text, float num)
	{
		cout << text << num << endl;
	}//функция с перегрузкой облегчающая написание ответа
	void PrintAnswer(string text, double num)
	{
		cout << text << num << endl;
	}
	void PrintAnswer(string text, int num)
	{
		cout << text << num << endl;
	}
	void PrintCh(int num,char c)
	{
		cout << setw(num) << setfill(c) << c;
	}
	void PrintTask(string text)
	{	
	
		cout << endl;
		PrintCh(30, ' ');
		cout <<"#"<< text<<"#"<< endl;
		PrintCh(30, ' ');
		PrintCh(9, '-');
		cout << endl;
		cout << endl;
	}
	void PrintLab(int i)
	{
		PrintAnswer("			Лабораторная работа №",i);
		PrintCh(70, '-');
	}
	
}
namespace console
{
	void Exit(void(*f)())
	{
		while (true)
		{
			string exit;

			f();
			cout << "\n Перейти к следующему заданию? Y/N \n";
			cin >> exit;
			if (exit == "N")
			{
				continue;
			}			
			else if (exit == "Y")
			{
				break;
			}
			else
			{
				cout << "Введен некоректный ответ" << endl;
				break;
			}
		}
	}
}

using namespace printlab;
using namespace console;



namespace lab4
{
	//Функции использующеяся в задачах
	void SelectAndSizeOfType()
	{
		string input;
	
		cout << endl;
		cin >> input;
	
		if (input == "INT")
		{
			cout << sizeof(int) << " байт";
			cout << endl;
		}else
		if (input == "FLOAT")
		{
			cout << sizeof(float) << " байт";
			cout << endl;
		}else
		if (input == "DOUBLE")
		{
			cout << sizeof(double) << " байт";
			cout << endl;
		}else
		if (input == "CHAR")
		{
			cout << sizeof(char) << " байт";
			cout << endl;
		}
		else
		{
			cout <<endl<< "Ошибка : Введено некоректное название типа"<<endl;
		}
	}
	void DrawV()
		{
			char c, probel; probel = ' ';
			cout << "Введите символ "; cin >> c;
			PrintCh(10, ' '); PrintCh(4, c); cout<<endl;
			PrintCh(10, ' '); PrintCh(1, c); PrintCh(3, ' '); PrintCh(1, c); cout<<endl;
			PrintCh(10, ' '); PrintCh(1, c); PrintCh(4, ' '); PrintCh(1, c); cout<<endl;
			PrintCh(10, ' '); PrintCh(1, c); PrintCh(4, ' '); PrintCh(1, c); cout<<endl;
			PrintCh(4, ' '); PrintCh(1, c); PrintCh(5, ' '); PrintCh(1, c); PrintCh(3, ' '); PrintCh(1, c); cout<<endl;
			PrintCh(3, ' '); PrintCh(3, c); PrintCh(4, ' '); PrintCh(1, c); PrintCh(2, ' '); PrintCh(1, c); cout<<endl;
			PrintCh(2, ' '); PrintCh(5, c); PrintCh(3, ' '); PrintCh(4, c); PrintCh(4, ' '); PrintCh(4, c); cout<<endl;
			PrintCh(1, ' '); PrintCh(7, c); PrintCh(2, ' '); PrintCh(1, c); PrintCh(3, ' '); PrintCh(1, c); PrintCh(7, ' '); PrintCh(1, c); cout<<endl;
			PrintCh(2, ' '); PrintCh(5, c); PrintCh(3, ' '); PrintCh(1, c); PrintCh(4, ' '); PrintCh(1, c); PrintCh(7, ' '); PrintCh(1, c); cout<<endl;
			PrintCh(3, ' '); PrintCh(3, c); PrintCh(4, ' '); PrintCh(1, c); PrintCh(4, ' '); PrintCh(1, c); PrintCh(4, ' '); PrintCh(4, c); cout<<endl;
			PrintCh(4, ' '); PrintCh(1, c); PrintCh(5, ' '); PrintCh(1, c); PrintCh(4, ' '); PrintCh(1, c); PrintCh(7, ' '); PrintCh(1, c); cout<<endl;
			PrintCh(10, ' '); PrintCh(5, c); PrintCh(2, ' '); PrintCh(6, c); cout<<endl;
			PrintCh(10, ' '); PrintCh(5, ' '); PrintCh(3, ' '); PrintCh(5, ' '); cout<<endl; 
			PrintCh(10, ' ');
		}
	//-------------------------------

	void Lab4_1()
	{
		void(*SelPtr)() = &SelectAndSizeOfType;

		PrintTask("Task 1");

		printf("Эта программа показывает размер обьекта в байтах");
		printf("Для запуска программы выберите тип с которым\nпредстоит работать и введите его\n\nINT\nFLOAT\nDOUBLE\nCHAR\n");
	
	
		
		Exit(SelPtr);
		
	}
	void Lab4_2()
	{
		void(*DrawVPtr)() = &DrawV;

		PrintTask("Task 2");
		printf("Эта программа рисует символами");

		Exit(DrawV);
		
	}
	void Lab4_3()
	{
		PrintTask("Task 3");
		printf("Синица \t\t\t Факультет: Хуевпинание \nЕлисей \t\t\t Номер группы: Хммм \nДмитриевиц\bч\n");
		printf("текст у которого пропала одна буква \r \n\n");

		_getch();
	}
	void Lab4_4()
	{
		PrintTask("Task 4");

		SetConsoleOutputCP(866);
		SetConsoleCP(866);

		char name[60];
		

		puts("Как тебя зовут?");
		gets_s(name);
		printf("Привет, %s ",&name);
		

	}
}



int main()
{
	
	setlocale(LC_CTYPE, "Russian");

	printf("Лабораторная работа номер 4");
	cout << endl;
	lab4::Lab4_1();
	cout << endl;
	lab4::Lab4_2();
	cout << endl;
	lab4::Lab4_3();
	cout << endl;
	lab4::Lab4_4();
	cout << endl;
	
}

