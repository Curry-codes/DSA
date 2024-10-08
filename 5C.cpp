// Insertion sort

#include <iostream>
using namespace std;

// Function to sort an array using insertion sort
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i]; // Store the current value
        j = i - 1; // Start comparing with the previous element

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Shift elements to the right
            j = j - 1; // Move to the next element
        }
        arr[j + 1] = key; // Place the key at its correct position
    }
}

// A utility function to print an array of size n
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Driver code
int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int N = sizeof(arr) / sizeof(arr[0]);

    // Sort the array
    insertionSort(arr, N);
    
    // Print the sorted array
    cout << "Sorted array: \n";
    printArray(arr, N);

    return 0;
}
