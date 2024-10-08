//To implement the concept of Push, Pop, Display and Exit operations

#include <iostream>
#include <cstdlib>  // For exit()
using namespace std;

#define MAX 5  // Maximum size of the stack
int top = -1, stack[MAX];

void push();
void pop();
void display();

int main() {
    int ch;
    while (1) {
        cout << "\n**** Stack Menu ****";
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: cout << "Wrong choice!!";
        }
    }
    return 0;
}

void push() {
    int val;
    if (top == MAX - 1) {
        cout << "Stack is full\n";
    } else {
        cout << "Enter element to push: ";
        cin >> val;
        top = top + 1;
        stack[top] = val;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack is empty!!\n";
    } else {
        cout << "Deleted element is: " << stack[top] << "\n";
        top = top - 1;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack is:\n";
        for (int i = top; i >= 0; --i) {
            cout << stack[i] << "\n";
        }
    }
}
