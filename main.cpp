#include <iostream>
#include "selection.h"
using namespace std;

int main() {
  int size = 7;
int* arr = new int[size] {9, 11, 4, 5, 5, 7, 2};

  selection_sort(arr, size);
  print(arr, size);

  delete [] arr;
}