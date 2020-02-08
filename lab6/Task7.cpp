#include <iostream>
#include "module/IsPrime.h"
using namespace std;
void Task7()
{
  int numb;
  int input;
 
  int one, two, three;
  cin >> input;
  for (int i = 10; i < input; i++) 
  {
    if (isSuperPrime(i)) 
    {
      cout << i<<endl;
    }
  }

    Task7();
}
