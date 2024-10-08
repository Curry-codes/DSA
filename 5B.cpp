//Selection sort

#include <iostream>
using namespace std;

// Swap function to swap two elements
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    
    // One by one move boundary of the unsorted subarray
    for (i = 0; i < n - 1; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; // Update the index of the minimum element
            }
        }
        // Swap the found minimum element with the first element
        if (min_idx != i) {
            swap(&arr[min_idx], &arr[i]);
        }
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sorting the array
    selectionSort(arr, n);

    // Output sorted array
    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}
