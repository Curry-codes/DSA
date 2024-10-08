//To implement the concept of Push, Pop, Display and Exit operations

#include <iostream>
#include <cstdlib>  // For exit()
using namespace std;

#define MAX 100  // Maximum size of the stack

class Stack {
private:
    int arr[MAX];  // Array to hold stack elements
    int top;       // Index of the top element

public:
    Stack() : top(-1) {}  // Initialize top to -1 (empty stack)

    // Function to push an element onto the stack
    void push() {
        int val;
        if (top == MAX - 1) {
            cout << "\nStack is full!";
        } else {
            cout << "\nEnter element to push: ";
            cin >> val;
            arr[++top] = val;  // Increment top and add the value
            cout << val << " pushed onto stack.";
        }
    }

    // Function to pop an element from the stack
    void pop() {
        if (top == -1) {
            cout << "\nStack is empty!";
        } else {
            cout << "\nPopped element: " << arr[top--];  // Return the top element and decrement top
        }
    }

    // Function to display the elements in the stack
    void display() {
        if (top == -1) {
            cout << "\nStack is empty!";
        } else {
            cout << "\nStack elements are: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";  // Display elements from top to bottom
            }
            cout << endl;
        }
    }
};

int main() {
    Stack stack;  // Create a Stack object
    int choice;

    while (true) {
        // Menu options
        cout << "\n\n----- Stack Menu -----";
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                stack.push();
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.display();
                break;
            case 4:
                cout << "\nExiting...\n";
                exit(0);  // Exit the program
            default:
                cout << "\nInvalid choice! Please try again.";
        }
    }

    return 0;
}

