#include <iostream>
#include <iomanip>
#include <fstream>
#include <conio.h>
#include "ConsoleScreenInfo.h"

using namespace std;

void DrawFromFile(string path,char ch,char space)
{
  const int h = 23;
  const int w = 49;
  char s1[w][h];             //В массив будет переноситься строка из файла

  int indent = floor(30 * ConsoleScreenInfo().x / 100);

  ifstream in(path);     //Открываем файл для считывания информации

  for (int i = 0; i < h - 1; i++)
  {
    cout << std::setw(indent) << std::setfill(space);
    for (int j = 0; j < w - 1; j++) 
    {
      in >> s1[j][i];  
      
      if (s1[j][i] == '1') 
      {
        cout << ch;
      }
      else 
      {
        cout << space;
      }
      
    }
    cout << endl;
  }
                         //считываем строку
  in.close();                                // Закрываем файл

}