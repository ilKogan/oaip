#include <iostream>
#include <string.h>
#include <stdio.h>
#include <windows.h>


using namespace std;

void Task1()
{
    double b, z, j,
        x = 4.e-3,
        s = 1.1;

    cout << "Please write j \n";
    cin >> j;



    b = s + (5 * x + j);

    b < 1.5 ? z = sqrt(x + 0.3 * j) + b : z = abs(x * j + b);

    cout<<"j = " << j << "\nz = " << z << endl;

}
void Task2()
{
    float x, y, z, mn, mx;
    cout << "Write x\n";
    cin >> x;
    cout << "Write y\n";
    cin >> y;
    cout << "Write z\n";
    cin >> z;

    ((x + y + z) < (x * y * z)) ? mx = (x * y * z) : mx = (x + y + z);

    mn = x;

    if (mn > y) mn = y;
    if (mn > z) mn = z;

    cout << "max(x + y + z, xyz) * min(x, y, z) = "<<mn*mx;

}
void Task3()
{
    int k;
    puts("You want bye car?\n 1.Yes\n 2.No");
    cin >> k;
    
    switch (k)
    {
    case 1:
    {
        puts("Well...What kind of car do you want?\n 1.Maybach 2.Toyota 3.Lada ");
        cin >> k;
        switch (k)
        {
            case 1: puts("You get a lot of MONEY?!?!!!?"); break;
            case 2: puts("Good"); break;
            case 3: puts("Are you fucking crazy?!"); break;
        }
    }
    case 2: puts("Well, then what are you doing here?"); break;
    default: puts("What? you say something wrong!");
        break;
    }

}
void Task4()
{
    float a, b, c, d, x1 ,x2;
    cout << "Please write a\n";
    cin >> a;
    cout << "Please write b\n";
    cin >> b;
    cout << "Please write c\n";
    cin >> c;

    d = pow(b, 2) - (4 * a * c);

    if (d < 0)
        cout << "No roots\n";
    else
    {
        x1 = ((-b + sqrt(d)) / (2 * a));
        x2 = ((-b - sqrt(d)) / (2 * a));

        cout << "\nX1 = " << x1;
        cout << "\nX2 = " << x2;
    }




}
void Task5_6()
{
    
    char str[10] = "", *s = str;
    bool zero;
    bool one;

    cout << "This program checks whether a three digit number has 1 or 0\n\n";

    cin >> str;

    zero = strchr(s, 48);
    one = strchr(s, 49);

    cout.setf(ios::boolalpha);

    cout << "This three digit number has\n";
    cout << "0 : "<<zero<<endl;
    cout << "1 : "<<one<<endl;

}
void Task5_13()
{
    
    int k;
    string s;
    string answer;

    cin >> s;

    if (s.size()!= 0)
    {
        if (s[s.size() - 1] == 49)
        {
            if (s.size()>1 && s[s.size() - 2] == 49)
            {
                answer = " gribov";
            }
            else
            {
                answer = " grib";
            }
        }
        else if (s[s.size() - 1] > 49 && s[s.size() - 1] < 53)
        {
            if (s.size() > 1 && s[s.size() - 2] == 49)
            {
                answer = " gribov";
            }
            else
            {
                answer = " griba";
            }
        }
        else if (s[s.size() - 1] >= 53||s[s.size() - 1] == 48)
        {
            answer = " gribov";
        }
    }

    cout << "\nMy nashli " << s << answer << " v lesy\n";

    
    
    Task5_13();
  
}
void Task7_2()
{
    enum ConsoleColor {
        Black = 0,
        Green = 2,
        Red = 4,
        White = 15
    };

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    //This massive need for calculate position figures
    int b[8][8] = {
    { {1} ,{2} ,{3} ,{4} ,{5} ,{6} ,{7} ,{8}  },
    { {9} ,{10},{11},{12},{13},{14},{15},{16} },
    { {17},{18},{19},{20},{21},{22},{23},{24} },
    { {25},{26},{27},{28},{29},{30},{31},{32} },
    { {33},{34},{35},{36},{37},{38},{39},{40} },
    { {41},{42},{43},{44},{45},{46},{47},{48} },
    { {49},{50},{51},{52},{53},{54},{55},{56} },
    { {57},{58},{59},{60},{61},{62},{63},{64} } };
    //This massive need for user input
    string a[8][8] = {
    { {"A8"} ,{"B8"} ,{"C8"} ,{"D8"} ,{"E8"} ,{"F8"} ,{"G8"} ,{"H8"}  },
    { {"A7"} ,{"B7"} ,{"C7"} ,{"D7"} ,{"E7"} ,{"F7"} ,{"G7"} ,{"H7"}  },
    { {"A6"} ,{"B6"} ,{"C6"} ,{"D6"} ,{"E6"} ,{"F6"} ,{"G6"} ,{"H6"}  },
    { {"A5"} ,{"B5"} ,{"C5"} ,{"D5"} ,{"E5"} ,{"F5"} ,{"G5"} ,{"H5"}  },
    { {"A4"} ,{"B4"} ,{"C4"} ,{"D4"} ,{"E4"} ,{"F4"} ,{"G4"} ,{"H4"}  },
    { {"A3"} ,{"B3"} ,{"C3"} ,{"D3"} ,{"E3"} ,{"F3"} ,{"G3"} ,{"H3"}  },
    { {"A2"} ,{"B2"} ,{"C2"} ,{"D2"} ,{"E2"} ,{"F2"} ,{"G2"} ,{"H2"}  },
    { {"A1"} ,{"B1"} ,{"C1"} ,{"D1"} ,{"E1"} ,{"F1"} ,{"G1"} ,{"H1"}  } };
    //This massive need for visual output
    string c[8][8] = {
    { {"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"}  },
    { {"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."}  },
    { {"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"}  },
    { {"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."}  },
    { {"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"}  },
    { {"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."}  },
    { {"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"}  },
    { {"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."}  } };


    string enemyFigurePos;
    string elephantFigurePos;
    int enemyFigure;
    int elephantFigure;
    bool winPosition = false;
    
    

        cout << "  A  B  C  D  E  F  G  H" << endl;
        cout << "8 .  ~  .  ~  .  ~  .  ~  "<< endl;
        cout << "7 ~  .  ~  .  ~  .  ~  . "<< endl;
        cout << "6 .  ~  .  ~  .  ~  .  ~ "<< endl;
        cout << "5 ~  .  ~  .  ~  .  ~  . "<< endl;
        cout << "4 .  ~  .  ~  .  ~  .  ~ "<< endl;
        cout << "3 ~  .  ~  .  ~  .  ~  . "<< endl;
        cout << "2 .  ~  .  ~  .  ~  .  ~ "<< endl;
        cout << "1 ~  .  ~  .  ~  .  ~  . "<< endl;


                SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | Red));
        cout << "\nWrite position enemy figure\n";
        cin  >> enemyFigurePos;
                SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | Green));
        cout << "\nWrite position elephant figure\n";
        cin  >> elephantFigurePos;
        

    for(int i = 0; i <= 7;i++)
    {
        for(int j = 0; j <= 7;j++)
        {
            if (a[i][j] == enemyFigurePos)
            {
                enemyFigure = b[i][j];
                c[i][j] = "F"; 
            }

            if (a[i][j] == elephantFigurePos)
            {
                elephantFigure = b[i][j];
                c[i][j] = "E"; 
            }
        }
    }
    SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | Red));
    cout << "\nEnemy:F";
    cout << "|";
    SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | Green));
    cout << "Elephant:E" << endl;
    SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | White));
    cout << "\n  A  B  C  D  E  F  G  H" << endl;
    for (int i = 0; i <= 7; i++)
    {
        cout <<abs(i - 8);
        for (int j = 0; j <= 7; j++)
        {
            cout << " " << c[i][j] << " ";
        }
            cout << endl;
    }

    if (enemyFigure < elephantFigure)
    {
        
        for (int e = elephantFigure; e >= 0; e -= 9)
        {
            if (e == enemyFigure)
            {
                winPosition = true;
            }
            else
            {
                continue;
            }

            
        }
        for (int j = elephantFigure; j >= 0; j -= 7)
        {
            if (j == enemyFigure)
            {
                winPosition = true;
            }
            else
            {
                continue;
            }

        }
       
    }

    if (enemyFigure > elephantFigure)
    {
        for (int g = elephantFigure; g >= 64; g += 9)
        {
            if (g == enemyFigure)
            {
                winPosition = true;
            }
            else
            {
                continue;
            }

        }
        for (int z = elephantFigure; z >= 64; z += 7)
        {
            if (z == enemyFigure)
            {
                winPosition = true;
            }
            else
            {
                continue;
            }

        }
    }
    SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | Red));
    cout << "Enemy:" << enemyFigurePos << "|";
    SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | Green));
    cout << "Elephant:" << elephantFigurePos << endl;

    if (winPosition)
    {
        SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | Green));
        cout << "\nYOU WIN!\n";
    }
    else
    {
        SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | Red));
        cout << "\nYOU DUDE!\n";
    }
    SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | White));


}


int main()
{

    Task7_2();

    system("pause");

}
