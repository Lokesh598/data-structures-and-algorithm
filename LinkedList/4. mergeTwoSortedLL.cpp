#include<iostream>
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

node *mergeTwoSortedArray(node *a, node *b) {
    // boundary cases
    if (a == NULL) return b;
    if (b == NULL) return a;
    node *head, *tail = NULL; 
    if (a->data <= b->data) {
        head = tail = a;
        a = a->next;
    } else {
        head = tail = b;
        b = b->next;
    }

    while(a != NULL && b != NULL) {
        if (a->data <= b->data) {
            tail->next = a;
            tail = a;
            a = a->next;
        } else {
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }
    if(a == NULL) {
        tail->next = b;
    } else {
        tail->next = a;
    }
    return head;
}
void printList(node *head) {
    node *temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node *a = new node(5);
    a->next = new node(10);
    a->next->next = new node(15);

    node *b = new node(2);
    b->next = new node(20);
    printList(mergeTwoSortedArray(a,b));
    return 0;
}
