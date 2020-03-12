#include <iostream>

void Task5_6() 
{

  char str[10] = "", *s = str;
  bool zero;
  bool one;

  std::cout << "This program checks whether a three digit number has 1 or 0\n\n";

  std::cin >> str;

  zero = strchr(s, 48);
  one = strchr(s, 49);

  std::cout.setf(std::ios::boolalpha);

  std::cout << "This three digit number has\n";
  std::cout << "0 : " << zero << std::endl;
  std::cout << "1 : " << one << std::endl;
  system("pause");
}