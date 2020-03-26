#include <iostream>
#include <iomanip>

#define LESS(a,b) ((a) < (b) ? true:false)
#define EQUAL(a,b) ((a) == (b) ? true:false)
#define GREATHER(a,b) ((a) > (b) ? true:false)

using namespace std;

enum {
  LESS,
  EQUAL,
  GREATHER
}mode;



bool pairsCompareByCondition(int a,int b,int mode) {
  switch (mode) {
  case LESS: return LESS(a, b);
     break;
  case EQUAL: return EQUAL(a, b);
     break;
  case GREATHER:return GREATHER(a, b);
     break;
  default: cout << "\nError:not correct argument mode\n";
     break;
  }
}

int numArrPairsCompareByCodition(int *arrA,int twoDimsizeA,int *arrB,int twoDimsizeB,int mode) {
  int numPair = 0;
  int size = twoDimsizeA * twoDimsizeB;
  for (int i = 0; i < size; i++) {
    if (pairsCompareByCondition(arrA[i], arrB[i], mode)) {
      numPair++;
    }
  }
  
  return numPair;
}

void findNegativeElement(int* arrA, int twoDimsize,int oneDimsize) {
  int size = twoDimsize * oneDimsize;

  //       0{ 0, 1,} 1{2, 3,} 2{4, 5} 
  int i = 0;
  int tmpIndex = 0;

  for (int k = 0; k < twoDimsize; i += oneDimsize,k++) {   
    for (int j = 0; j < oneDimsize; j++) { 
      if (arrA[i + j] < 0) {
        tmpIndex = j;
      }
      if (tmpIndex > 0) {
        arrA[i+tmpIndex] -= 2;
      }
    }
  }
}



void Task8() {
  int A[2][3] = { 1,-2,6,2,1,4 };
  int B[3][3] = { -2,4,-3,-3,1,5 };

  int countLess = 0;
  int countEqual = 0;
  int countGreather = 0;

  countLess = numArrPairsCompareByCodition(*A,2,*B,3,LESS);
  countEqual = numArrPairsCompareByCodition(*A, 2, *B, 3,EQUAL);
  countGreather = numArrPairsCompareByCodition(*A, 2,*B, 3,GREATHER);

  findNegativeElement(*A, 2, 3);
                                                 
}
