#include <iostream>

#define EQUATION_1(x,y,z) x * y * z
#define EQUATION_2(x,y,z) x + y + z

void Task2() 
{
  float x, y, z, mn, mx;
  std::cout << "Write x\n";
  std::cin >> x;
  std::cout << "Write y\n";
  std::cin >> y;
  std::cout << "Write z\n";
  std::cin >> z;

  (EQUATION_2(x,y,z) < EQUATION_1(x, y, z)) ? mx = EQUATION_1(x, y, z) : mx = EQUATION_2(x, y, z);

  mn = x;

  if (mn > y) mn = y;
  if (mn > z) mn = z;

  std::cout << "max(x + y + z, xyz) * min(x, y, z) = " << mn * mx << std::endl;
  system("pause");
}

#undef EQUATION_1
#undef EQUATION_2