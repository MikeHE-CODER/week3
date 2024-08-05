#include "workshop.h"
#include <iostream>
using namespace std;
int main() {
  double number = 5;
  changeValue(&number);
  double *array = new double[number]();
  printArray(array, 5);
  arrayMax(array, 5);
  double *array2 = dynamicArray(10);
  double max = arrayMax(array2, 10);
  std::cout << max << std::endl;
  delete[] array2;
  double *array3 = dynamicArray(5, 3);
  double *array4 = dynamicArray(5);
  printArray(array, 5);
  double max2 = arrayMax(array4, 5);
  std::cout << max << std::endl;
}
