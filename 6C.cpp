// To search element using Binary search

#include <iostream>
using namespace std;

int main() {
    int n, search, array[100];
    
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " integers in sorted order:\n";  // Ensure sorted input for binary search
    for (int c = 0; c < n; c++) {
        cin >> array[c];
    }

    cout << "Enter value to find: ";
    cin >> search;

    int first = 0;
    int last = n - 1;
    int middle;

    while (first <= last) {
        middle = (first + last) / 2;

        if (array[middle] < search) {
            first = middle + 1;
        } 
        else if (array[middle] == search) {
            cout << search << " found at location " << middle + 1 << "." << endl; // Adjust for 1-based index
            break;
        } 
        else {
            last = middle - 1;
        }
    }

    if (first > last) {
        cout << "Not found! " << search << " is not present in the list." << endl;
    }

    return 0;
}
