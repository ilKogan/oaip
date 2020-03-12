#include <iostream>

using namespace std;
void Task4() {

  //1_Task
  char tmp[33];
  int num,check, result;
  int numA, shift;

  cin >> num;
  cin >> check;

  result = !(num & check-1);
  result ? cout<<"number kratno" + check<<endl : cout<<"number nekratno"+check<<endl;

  //2_Task
   cin >> numA;
   cin >> shift;
   _itoa_s(numA, tmp, 2);
   cout << "numTwo =" << tmp<<endl;

   numA |= (1 << shift);

   _itoa_s(numA, tmp, 2);
   cout << "modifie=" << tmp << endl;
}

