#include <iostream>

using namespace std;

int main()
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
