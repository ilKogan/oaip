#include <iostream>
#include <iomanip>
#include <windows.h>

#define height 23
#define weight 48
#define space ' '


using namespace std;

struct vector2
{
	int x;
	int y;
};

vector2 ConsoleInfo()
{

	vector2 screen;

	HANDLE hWndConsole;
	if (hWndConsole = GetStdHandle(-12))
	{
		CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
		if (GetConsoleScreenBufferInfo(hWndConsole, &consoleInfo))
		{
			 screen.x = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left + 1;
			 screen.y = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top + 1;
			
		}
		else
			printf("Error: %d\n", GetLastError());
	}
	else
		printf("Error: %d\n", GetLastError());
	

	return screen;

}

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
		int input;

		cout << endl;
		cin >> input;

		switch (input)
		{
		case 1:
			cout << sizeof(int) << " byte";
			cout << endl;
			break;
		case 2:
			cout << sizeof(float) << " byte";
			cout << endl;
			break;
		case 3:
			cout << sizeof(double) << " byte";
			cout << endl;
			break;
		case 4:
			cout << sizeof(char) << " byte";
			cout << endl;
			break;
		default:
			break;
		}

	}
void DrawTriangle()
	{
		char ch, 
		int pattern = -1;
		int size;

		cout << "Enter char\n";
		cin >> ch;
		cout << "Enter size\n";
		cin >> size;
		cout <<endl;
	
		for (int s = size - 1; s > 0; s--)
		{
			
			pattern += 2;

			cout << setw(size) << setfill(space)<<space;
			cout << setw(pattern) << setfill(ch)<<ch;
			cout << setw(size) << setfill(space)<<space<<endl;

			size -= 1;
		}   
    }
void CalculatePriceMilk()
	{
		int nowYear;
		float nowPrice;
		float percent ;
		int years;

		float onePercentPrice;
		float differencePrice;

		int firstYear;
		float firstPrice;
		float secondprice;


		cout << endl;
		cout << "What is the year now?\n";
		cin >> nowYear;
		cout << "Price \n";
		cin >> nowPrice;
		cout << "Percent % \n";
		cin >> percent;
		cout << "Years \n";
		cin >> years;

		firstPrice = nowPrice;
		firstYear = nowYear;

		for(years; years > 0 ;years--)
		{
			onePercentPrice = nowPrice / 100;
			differencePrice = onePercentPrice * percent;

			nowYear++;
			cout<<"Year: "<<nowYear<<endl;

			nowPrice += differencePrice;
			cout<<"Winter difference price: "<< differencePrice<<endl;
			cout<<"Winter price :"<< nowPrice<<endl;

			onePercentPrice = nowPrice / 100;
			differencePrice = onePercentPrice * percent;

			nowPrice -= differencePrice;
			cout<<"Summer difference price: "<< differencePrice << endl;
			cout<<"Summer price: "<< nowPrice << endl << endl;
			

		}

		cout<<"Year: "<<firstYear<<" price: "<< firstPrice << endl;
		cout<<"Year: "<<nowYear<<" price: "<< nowPrice << endl;
		cout<<"Difference : -"<< firstPrice - nowPrice << endl << endl;
	}
void DrawTriangleTwo()
{

	char ch,
	int pattern = -1;
	int size;
	int indent;
	
	cout << "Enter char\n";
	cin >> ch;
	cout << endl;

	indent = floor(30 * ConsoleInfo().x / 100);
	size = floor(75 * ConsoleInfo().y / 100);


	for (int s = size - 1; s > 0; s--)
	{

		pattern += 2;

		cout << setw(indent) << setfill(space) << space;
		cout << setw(size) << setfill(space) << space;
		cout << setw(pattern) << setfill(ch) << ch;
		cout << setw(size) << setfill(space) << space << endl;

		size -= 1;
	}

	cout << "Console Window\n Weight:" << ConsoleInfo().x << endl;
	cout << "Height:" << ConsoleInfo().y << endl;
}


void DistanceTwoPoint()
	{
		vector2 m1,m2;
		float distance;

		cout<<"\nEnter the value of x and y point m1\n";
		cin>>m1.x>>m1.y;
		cout<<"Enter the value of x and y point m2\n";
		cin>>m2.x>>m2.y;

		distance = sqrt(pow((m2.x - m1.x), 2)+ pow((m2.y - m1.y),2));

		cout<<"Distance :"<<distance;
	}
void DrawStar()
	{


		
		char pattern;
		char size = ' ';
		bool matrix[height][weight] = {
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,1,1,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0},
			{0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
			};

		cout<< "Enter char\n";
		cin >> pattern;

		int indent = floor(30 * ConsoleInfo().x / 100);

		for(int i = 0;i < height;i++)
		{
			cout << setw(indent) << setfill(size) << size;
			for(int j = 0;j < weight; j++)
			{
				if(matrix[i][j]==false)
				{
					cout<<size;
				}else{
					cout<<pattern;
				}
			}
			cout<<endl;
		}
		


	}






int main()
{
	void(*SelPtr)() = &SelectAndSizeOfType;
	void(*DrawTrianglePtr)() = &DrawTriangle;
	void(*CalculatePriceMilkPtr)() = &CalculatePriceMilk;
	void(*DistanceTwoPointPtr)() = &DistanceTwoPoint;
	void(*DrawStarPtr)() = &DrawStar;
	void(*DrawTriangleTwoPtr)() = &DrawTriangleTwo;

#pragma region--------------TASK 1----------------

	printf("Task 1\n");

	printf("This program shows the size of an object in byte.");
	printf("To start program, select the type\n\n1.INT\n2.FLOAT\n3.DOUBLE\n4.CHAR\n");



	Exit(SelPtr);
#pragma endregion This program shows the size of an object in byte
#pragma region--------------TASK 2----------------

	printf("\nTask 2\n");
	printf("\nThis program draws a triangle\n");

	Exit(DrawTriangle);
#pragma endregion This program draws a triangle
#pragma region--------------TASK 3----------------
	printf("Task 3\n");
	printf("Sinitsa \t\t\t Faculty: Huevpinanie \nElisey \t\t\t Number group: Hmm \nDmitrievicc\bh\n");
	printf("text with one letter missing \r \n\n");

	system("pause");
#pragma endregion This program print my name and other
#pragma region--------------TASK 4----------------
	printf("Task 4\n");

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	char name[60];


	puts("What is your name?\n");
	cin >> name;
	printf("\nHello, %s ", &name);
#pragma endregion This program simulation dialog
#pragma region--------------TASK 5.1----------------
	printf("\nTask 5.1\n");
	printf("\nThis program draws a triangle in center of console window\n");
	

	Exit(DrawTriangleTwo);
#pragma endregion This program draws a triangle in center of console window
#pragma region--------------TASK 5.2----------------
	printf("\nTask 5.2\n");
	printf("\nFarmer at the beginning of winter increases\n");
	printf("the nowPrice of milk at p procent and in the summer reduces by\n");
	printf("the same percentage. whether the nowPrice change on milk\n");
	printf("and, if so, in what direction and by how much, after n years?\n");

	Exit(CalculatePriceMilk);
#pragma endregion This program solves the problem about a farmer
#pragma region--------------TASK 6.1----------------
	printf("\nTask 6.1\n");
	printf("\nDraw Star\n");
	Exit(DrawStar);
#pragma This program draw Star
#pragma region--------------TASK 6.2----------------
	printf("\nTask 6.2\n");
	printf("\nFinding the distance between two points\n");
	

	Exit(DistanceTwoPoint);
#pragma Finding the distance between two points

}