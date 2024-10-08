// To search elements using sequential search

#include <iostream>
using namespace std;

int arraySize, val; // Changed 'size' to 'arraySize'
void disp(int size);
void search(int val, int size);
int arr[20];

int main() {
    int ch;

    cout << "Enter the size of the array: ";
    cin >> arraySize; // Using 'arraySize' instead of 'size'
    cout << "Enter " << arraySize << " integers:\n";
    for (int i = 0; i < arraySize; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n**** Main Menu ****\n";
        cout << "1. Display\n";
        cout << "2. Search\n";
        cout << "3. Exit\n";  // Added exit option
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                disp(arraySize); // Using 'arraySize'
                break;
            case 2:
                cout << "Enter value to be searched: ";
                cin >> val;
                search(val, arraySize); // Using 'arraySize'
                break;
            case 3:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
                break;
        }
    } while (ch != 3);  // Changed to exit on case 3

    return 0;
}

void search(int val, int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == val) {
            cout << "Value found at position: " << i << ".\n";
            return;  // Exit function when found
        }
    }
    cout << "Value not found.\n";  // Moved outside loop
}

void disp(int size) {
    cout << "Given Array:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;  // Added endl for better output formatting
}
