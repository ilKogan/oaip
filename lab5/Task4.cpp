#include <iostream>

#define EQUATION_1(a,b,c) pow(a, 2) - (4 * b * c)
#define EQUATION_2(a,b,c) (-a - sqrt(b)) / (2 * c)
void Task4() 
{
  float a, b, c, d, x1, x2;
  std::cout << "Please write a\n";
  std::cin >> a;
  std::cout << "Please write b\n";
  std::cin >> b;
  std::cout << "Please write c\n";
  std::cin >> c;

  d = EQUATION_1(b,a,c);

  if (d < 0)
    std::cout << "No roots\n";
  else {
    x1 = EQUATION_2(b, d, a);
    x2 = EQUATION_2(b, d, a);

    std::cout << "\nX1 = " << x1;
    std::cout << "\nX2 = " << x2;
  }
  system("pause");
}
#undef EQUATION_1
#undef EQUATION_2