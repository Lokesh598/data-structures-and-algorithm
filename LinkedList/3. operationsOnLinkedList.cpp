// search node element
// insert node element
// delete node element

#include <iostream>
using namespace std;


class node {
public:
    int data;
    node *next;
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
// insert node at the end of the list
void insertAtEnd(node *head, int data) {
    node *newNode = new node(data);
    if (head == NULL) { // boundry condition
        head = newNode;
        return;
    }
    node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
// insert node at the beginning of the list
void insertAtBeginning(node **head, int data) {
    node *newNode = new node(data);
    if (*head == NULL) { // boundry condition
        *head = newNode;
        return;
    }
    newNode->next = *head;
    *head = newNode;
}

// insert node at the given position
void insertAtPosition(node *head, int data, int position) {
    node *newNode = new node(data);
    if (head == NULL) { // boundry condition
        head = newNode;
        return;
    }
    node *temp = head;
    int count = 0;
    while (temp->next != NULL && count < position - 1) {
        temp = temp->next;
        count++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
//find 2 is present or not
bool findNodeVal(node *head, int val) {
    node *temp = head;
    while(temp!=NULL) {
        if(temp->data == val)
            return true;
        temp = temp->next;
    }
    return false;
}

void printList(node *head) {
    node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// 1->2->3
int main() {
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);

    printList(head);
    cout << findNodeVal(head, 4) << endl; // false or 0

    // insert node at the end of the list
    insertAtEnd(head, 4);
    insertAtBeginning(&head, 0);
    insertAtPosition(head, 5, 3);
    printList(head);
    return 0;
}
