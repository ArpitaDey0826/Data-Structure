#include <iostream>
using namespace std;

void printArray(int array[], int s) {
  for (int i = 0; i < s; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void insertionSort(int array[], int s) {
  for (int step
    while (key <  = 1; step < s; step++) {
    int key = array[step];
    int j = step - 1;
array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}


int main() {
  int data[] = {8, 5, 1, 6, 3, 2};
  int s = sizeof(data) / sizeof(data[0]);
  insertionSort(data, s);
  cout << "Sorted array in ascending order: "<<endl;
  printArray(data, s);
}
