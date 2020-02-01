#include <iomanip>
#include <stdio.h>
#include <iostream>

#define sd 1.0F/3.0F 
#define tir '-'

using namespace std;

void Task1()
{
   float z,y,x;
   
   
   for (int n = 0; n < 4; n++)
   {

       printf("\nWrite x \n");

       scanf_s("%f", &x);
       z = 2 * pow(x, 2);
       y = z + pow(x, sd);

       printf("\nx = %5.2f\t", x);
       printf("\ny = %5.2f\t", y);

   }

}
void Task2()
{
   float z,y,x = 3;
   while(x < 4.1)
   {
      z = 2 * pow(x, 2);
      y = z + pow(x, (float)1 / 3);
      cout <<"x="<< x <<"\t\n";
      cout <<"y="<< y <<"\t\n";
      x = x + 0.1;
   }
}
void Task3()
{
    float z,y,x = 3;

    do
    {
      z = 2 * pow(x, 2);
      y = z + pow(x, (float)1 / 3);
      cout <<"x="<< x <<"\t\n";
      cout <<"y="<< y <<"\t\n";
      x = x + 0.1;
    } while (x < 4.1);
}
void Task4()
{
   int n, i, j;
   printf("Enter n: \n");

   scanf_s("%d", &n);

   for(i = 1; i <= n; i++)
   {
       for (j = 1; j <= n; j++)
       {
           printf("%5d", i * j);

           if (i == 1)
           {
               cout << endl;
               cout << setw(n * 5) << setfill(tir) << tir << endl;
           }

           printf("\n");
       }

   }

}
void Task5()
{
    float y, z, a, b, n, i;
    int choice;
    a = 2 * pow(10, -3);
    b = 8,5;

    cout<<"-----Menu-----\n";
    cout<<"choice calculation variant\n";
    cout << "1. for()\n2. while\n 3.for(){for()}\n";
    cin>> choice;

    switch (choice)
    {
    case 1: 
        for (n = 0; n < 2; n++)
        {
    
            cout << "\nWrite i \n";

            scanf_s("%f", &i);

            y = sqrt((i * b) - (pow(b, 2) * a));
            z = y * tan(n / 4) - exp(1 + b);

            cout << "\ny = " << y << endl;
            cout << "\nz = " << z << endl;

        }
        break;
    case 2:
        do
        {
            cout << "\nWrite i \n";
            scanf_s("%f", &i);
            cout << "\nWrite n \n";
            scanf_s("%f", &n);


            y = sqrt((i * b) - (pow(b, 2) * a));
            z = y * tan(n / 4) - exp(1 + b);

            cout << "\ny = " << y << endl;
            cout << "\nz = " << z << endl;
            i += 0.5;
        } while (i < 3.0);
        break;
    case 3:
        for (i = 1; i < 3; i += 0,5)
        {
            for (int n = 2; n < 3; n += 0.5)
            {
                y = sqrt((i * b) - (pow(b, 2) * a));
                z = y * tan(n / 4) - exp(1 + b);
    
                cout << "\ny = " << y;
                cout << " z = " << z << endl;
            }

        }
        break;
    default:
        break;
    }

   

}

int main()
{
    Task5();
}


