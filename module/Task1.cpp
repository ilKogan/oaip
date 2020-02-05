#include <iostream>

#define X_1 4.e-3
#define S2 1.1
#define EQUATION_1(a) S2 + ((5 * X_1) + a)
#define EQUATION_2(a,b) sqrt(X_1 + 0.3 * a) + b
#define EQUATION_3(a,b) abs(X_1 * a + b)

void Task1() 
{
  double b, z, j;

  std::cout << "Please write j \n";
  std::cin >> j;

  b = EQUATION_1(j);

  b < 1.5 ? z = EQUATION_2(j, b) : z = EQUATION_3(j, b);

  std::cout << "j = " << j << "\nz = " << z << std::endl;
  system("pause");
}

#undef X_1 
#undef S2 
#undef EQUATION_1
#undef EQUATION_2
#undef EQUATION_3