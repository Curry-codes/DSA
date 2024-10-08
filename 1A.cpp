//Write a program to store the elements in 1-D array and perform the operations like searching, sorting and reversing the elements.

#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n);  // Function to sort array using Bubble Sort
void reverse(int arr[], int n);     // Function to reverse the array
int search(int arr[], int n, int val);  // Function to search for an element
void display(int arr[], int n);     // Function to display the array

int main() {
    int arr[20], n, opt, val, choice;

    // Input number of elements
    cout << "Enter number of elements: ";
    cin >> n;

    // Input elements into the array
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Menu-driven loop
    do {
        cout << "\nMenu:\n";
        cout << "1. Display\n";
        cout << "2. Search\n";
        cout << "3. Sort\n";
        cout << "4. Reverse\n";
        cout << "5. Exit\n";
        cout << "Enter your choice of operation: ";
        cin >> choice;

        switch (choice) {
            case 1:
                display(arr, n);
                break;
            case 2:
                cout << "Enter value to be searched: ";
                cin >> val;
                int index;
                index = search(arr, n, val);
                if (index == -1) {
                    cout << "Value not found\n";
                } else {
                    cout << "Value found at location: " << index + 1 << "\n";
                }
                break;
            case 3:
                bubbleSort(arr, n);
                cout << "Array sorted successfully\n";
                display(arr, n);
                break;
            case 4:
                reverse(arr, n);
                cout << "Array reversed successfully\n";
                display(arr, n);
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}

// Function to search for an element in the array
int search(int arr[], int n, int val) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

// Function to sort the array using Bubble Sort
void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to reverse the array
void reverse(int arr[], int n) {
    int i = 0, temp, j = n - 1;
    while (i < j) {
        // Swap elements
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

// Function to display the array
void display(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

