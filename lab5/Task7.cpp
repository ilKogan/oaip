#include <iostream>
#include <string.h>
#include <stdio.h>
#include <windows.h>

#define Green  2
#define Red  4
#define White  15
#define Black 0

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void Task7_2() 
{

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
  std::string a[8][8] = {
  { {"A8"} ,{"B8"} ,{"C8"} ,{"D8"} ,{"E8"} ,{"F8"} ,{"G8"} ,{"H8"}  },
  { {"A7"} ,{"B7"} ,{"C7"} ,{"D7"} ,{"E7"} ,{"F7"} ,{"G7"} ,{"H7"}  },
  { {"A6"} ,{"B6"} ,{"C6"} ,{"D6"} ,{"E6"} ,{"F6"} ,{"G6"} ,{"H6"}  },
  { {"A5"} ,{"B5"} ,{"C5"} ,{"D5"} ,{"E5"} ,{"F5"} ,{"G5"} ,{"H5"}  },
  { {"A4"} ,{"B4"} ,{"C4"} ,{"D4"} ,{"E4"} ,{"F4"} ,{"G4"} ,{"H4"}  },
  { {"A3"} ,{"B3"} ,{"C3"} ,{"D3"} ,{"E3"} ,{"F3"} ,{"G3"} ,{"H3"}  },
  { {"A2"} ,{"B2"} ,{"C2"} ,{"D2"} ,{"E2"} ,{"F2"} ,{"G2"} ,{"H2"}  },
  { {"A1"} ,{"B1"} ,{"C1"} ,{"D1"} ,{"E1"} ,{"F1"} ,{"G1"} ,{"H1"}  } };
  //This massive need for visual output
  std::string c[8][8] = {
  { {"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"}  },
  { {"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."}  },
  { {"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"}  },
  { {"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."}  },
  { {"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"}  },
  { {"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."}  },
  { {"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"}  },
  { {"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."} ,{"~"} ,{"."}  } };

  std::string enemyFigurePos;
  std::string elephantFigurePos;
  int enemyFigure;
  int elephantFigure;
  bool winPosition = false;

  std::cout << "  A  B  C  D  E  F  G  H" << std::endl;
  std::cout << "8 .  ~  .  ~  .  ~  .  ~  " << std::endl;
  std::cout << "7 ~  .  ~  .  ~  .  ~  . " << std::endl;
  std::cout << "6 .  ~  .  ~  .  ~  .  ~ " << std::endl;
  std::cout << "5 ~  .  ~  .  ~  .  ~  . " << std::endl;
  std::cout << "4 .  ~  .  ~  .  ~  .  ~ " << std::endl;
  std::cout << "3 ~  .  ~  .  ~  .  ~  . " << std::endl;
  std::cout << "2 .  ~  .  ~  .  ~  .  ~ " << std::endl;
  std::cout << "1 ~  .  ~  .  ~  .  ~  . " << std::endl;

  SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | Red));
  std::cout << "\nWrite position enemy figure\n";
  std::cin >> enemyFigurePos;
  SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | Green));
  std::cout << "\nWrite position elephant figure\n";
  std::cin >> elephantFigurePos;

  for (int i = 0; i <= 7; i++) {
    for (int j = 0; j <= 7; j++) {
      if (a[i][j] == enemyFigurePos) {
        enemyFigure = b[i][j];
        c[i][j] = "F";
      }

      if (a[i][j] == elephantFigurePos) {
        elephantFigure = b[i][j];
        c[i][j] = "E";
      }
    }
  }
  SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | Red));
  std::cout << "\nEnemy:F";
  std::cout << "|";
  SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | Green));
  std::cout << "Elephant:E" << std::endl;
  SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | White));
  std::cout << "\n  A  B  C  D  E  F  G  H" << std::endl;
  for (int i = 0; i <= 7; i++) {
    std::cout << abs(i - 8);
    for (int j = 0; j <= 7; j++) {
      std::cout << " " << c[i][j] << " ";
    }
    std::cout << std::endl;
  }

  if (enemyFigure < elephantFigure) {

    for (int e = elephantFigure; e >= 0; e -= 9) {
      if (e == enemyFigure) {
        winPosition = true;
      } else {
        continue;
      }


    }
    for (int j = elephantFigure; j >= 0; j -= 7) {
      if (j == enemyFigure) {
        winPosition = true;
      } else {
        continue;
      }

    }

  }

  if (enemyFigure > elephantFigure) {
    for (int g = elephantFigure; g >= 64; g += 9) {
      if (g == enemyFigure) {
        winPosition = true;
      } else {
        continue;
      }

    }
    for (int z = elephantFigure; z >= 64; z += 7) {
      if (z == enemyFigure) {
        winPosition = true;
      } else {
        continue;
      }

    }
  }
  SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | Red));
  std::cout << "Enemy:" << enemyFigurePos << "|";
  SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | Green));
  std::cout << "Elephant:" << elephantFigurePos << std::endl;

  if (winPosition) {
    SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | Green));
    std::cout << "\nYOU WIN!\n";
  } else {
    SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | Red));
    std::cout << "\nYOU DUDE!\n";
  }
  SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | White));

  system("pause");
}