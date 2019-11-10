#include <iostream>
#include <iomanip>


using namespace std;


void Exit(void(*f)())
	{
		while (true)
		{
			string exit;

			f();
			cout << "\n Do you want exit? Y/N \n";
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
				cout << "Error\n";
				break;
			}
		}
	}
void SelectAndSizeOfType()
	{
		string input;

		cout << endl;
		cin >> input;

		if (input == "INT")
		{
			cout << sizeof(int) << " байт";
			cout << endl;
		}
		else
			if (input == "FLOAT")
			{
				cout << sizeof(float) << " байт";
				cout << endl;
			}
			else
				if (input == "DOUBLE")
				{
					cout << sizeof(double) << " байт";
					cout << endl;
				}
				else
					if (input == "CHAR")
					{
						cout << sizeof(char) << " байт";
						cout << endl;
					}
					else
					{
						cout << endl << "Ошибка : Введено некоректное название типа" << endl;
					}
	}
void DrawTriangle()
	{
		char ch,
			space   = ' '; 
		int pattern = -1;
		int empty;

		cout << "Enter char\n";
		cin >> ch;
		cout << "Enter size\n";
		cin >> empty;
	
		for (int s = empty - 1; s > 0; s--)
		{
			
			pattern += 2;

			cout << setw(empty) << setfill(space)<<space;
			cout << setw(pattern) << setfill(ch)<<ch;
			cout << setw(empty) << setfill(space)<<space<<endl;

			empty -= 1;
		}   
    }

int main()
{
	void(*SelPtr)() = &SelectAndSizeOfType;
	void(*DrawTrianglePtr)() = &DrawTriangle;

#pragma region

	printf("Task 1");

	printf("This program shows the size of an object in byte.");
	printf("To start program, select the type\n\nINT\nFLOAT\nDOUBLE\nCHAR\n");



	Exit(SelPtr);
#pragma endregion --------------TASK 1----------------
#pragma region

	printf("\nTask 2\n");
	printf("\nThis program draws a triangle\n");

	Exit(DrawTriangle);
#pragma endregion --------------TASK 2----------------
#pragma region
	printf("Task 3");
	printf("Sinitsa \t\t\t Faculty: Huevpinanie \nElisey \t\t\t Number group: Hmm \nDmitrievicc\bh\n");
	printf("text with one letter missing \r \n\n");

	system("pause");
#pragma endregion --------------TASK 3----------------
#pragma region
	printf("Task 4");


	char name[60];


	puts("What is your name?");
	gets_s(name);
	printf("Hello, %s ", &name);
#pragma endregion --------------TASK 4----------------



}