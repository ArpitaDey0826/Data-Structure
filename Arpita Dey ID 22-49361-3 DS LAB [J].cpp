#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
  bool swapped = true;
  for (int i = 0; i < n - 1 && swapped; i++) {
    swapped = false;
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        swapped = true; // Flag to indicate a swap occurred
      }
    }
  }
}

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    swap(arr[i], arr[minIndex]);
  }
}

void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int current = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > current) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = current;
  }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[] = {10, 8, 2, 7, 35, 13, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Original Array: ";
  printArray(arr, n);

  // Bubble Sort
  bubbleSort(arr, n);
  cout << "Bubble Sort: ";
  printArray(arr, n);

  // Selection Sort
  selectionSort(arr, n);
  cout << "Selection Sort: ";
  printArray(arr, n);

  // Insertion Sort
  insertionSort(arr, n);
  cout << "Insertion Sort: ";
  printArray(arr, n);

  // Time Complexity Analysis
  // Bubble Sort:
  // Worst Case - O(n^2)
  // Average Case - O(n^2)
  // Best Case - O(n)

  // Selection Sort:
  // Worst Case - O(n^2)
  // Average Case - O(n^2)
  // Best Case - O(n^2)

  // Insertion Sort:
  // Worst Case - O(n^2)
  // Average Case - O(n^2)
  // Best Case - O(n)

  // Suitability for the given dataset:
  // Based on the given dataset, which is relatively small and partially sorted, Insertion Sort would be the most suitable algorithm. Its average and best-case time complexities are better than Bubble Sort and Selection Sort, and it can take advantage of the partial order in the dataset.

  return 0;
}
