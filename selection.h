#ifndef SELECTION_H
#define SELECTION_H

#include <iostream>
using namespace std;

template <typename T>
void swapp(T &a, T &b) {
  T tmp = a;
  a = b;
  b = tmp;
}


template <typename T>
void print(T* arr, T size) {
  for(T i=0; i<size; i++)
    cout << arr[i] << endl;
}


template <typename T>
void selection_sort(T *arr, T size) {
  T id_selected;

  for(T i=0; i<size; i++) {
    id_selected = i;

    for(T j=i; j<size; j++) 
      if(arr[id_selected] > arr[j])
        id_selected = j;
      
    swapp(arr[i], arr[id_selected]);
  }
}

#endif