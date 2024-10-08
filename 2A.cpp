//to create a single LL and display the node elements in reverse order

#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

struct LinkedList {
    Node* head;
    LinkedList() {
        head = NULL;
    }

    void reverse() {
        Node* current = head;
        Node* prev = NULL;
        Node* next = NULL;
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void push(int data) {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};

int main() {
    LinkedList list;

    // Pushing predefined values into the linked list
    list.push(20);
    list.push(4);
    list.push(15);
    list.push(85);

    // Display the linked list
    cout << "Given linked list:\n";
    list.print();

    // Reverse and display the linked list
    list.reverse();
    cout << "Reversed Linked List:\n";
    list.print();

    return 0;
}


