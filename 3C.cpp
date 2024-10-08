//Tower of Hanoi problem

#include <iostream>
using namespace std;

// Function to move disks from source to destination
void move(int n, char source, char temp, char destination) {
    if (n == 1) {
        // Base case: Only one disk to move
        cout << "\nMove disk 1 from " << source << " to " << destination;
    } else {
        // Move top n-1 disks from source to temp
        move(n - 1, source, destination, temp); // Move from source to temp using destination as auxiliary

        // Move the nth disk from source to destination
        cout << "\nMove disk " << n << " from " << source << " to " << destination; // Move from source to destination

        // Move the n-1 disks from temp to destination
        move(n - 1, temp, source, destination); // Move from temp to destination using source as auxiliary
    }
}

int main() {
    int n; // Number of disks
    cout << "Enter number of disks: ";
    cin >> n; // Take user input for the number of disks

    // Start the process
    move(n, 'A', 'B', 'C'); // A, B, and C are names of rods

    return 0;
}
