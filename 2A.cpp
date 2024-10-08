//to create a single LL and display the node elements in reverse order

#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Class to manage the linked list
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Function to push a new node at the end of the linked list
    void push(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;
        
        if (head == nullptr) {
            head = newNode;  // If list is empty, new node is the head
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;  // Traverse to the end of the list
            }
            temp->next = newNode;  // Link the new node at the end
        }
    }

    // Function to display the linked list
    void displayList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Function to display the linked list in reverse order using recursion
    void displayReverse(Node* node) {
        if (node == nullptr) {
            return;
        }
        displayReverse(node->next);  // Recursive call to the next node
        cout << node->data << " ";    // Print data after recursive call
    }

    // Wrapper function to call reverse display
    void displayReverse() {
        displayReverse(head);
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
    list.displayList();

    // Display the linked list in reverse order
    cout << "Reversed Linked List:\n";
    list.displayReverse();
    cout << endl;

    return 0;
}

