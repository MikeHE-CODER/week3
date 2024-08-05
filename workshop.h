#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
void changeValue(double *a) { *a = 42; }
void printArray(double *array, int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << endl;
  }
}
double arrayMax(double *array, int size) {
  double max = array[0];
  for (int i = 0; i < size; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  return max;
}
double *dynamicArray(int size) {
  srand(time(nullptr));
  double *array = new double[size];
  for (int i = 0; i < size; i++) {
    array[i] = rand() % 100;
  }
  return array;
}
double *dynamicArray(int n, double m) {
  double *array = new double[n];
  for (int i = 0; i < n; i++) {
    array[i] = m;
  }
  return array;
}
