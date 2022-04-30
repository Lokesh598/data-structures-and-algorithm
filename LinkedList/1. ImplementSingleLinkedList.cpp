1. create each node seperately after that link them
2. define node in class or structure using constructor and push values in heap
3. take each node values from user

method 1.
#include<iostream>
using namespace std;


struct node{
    int data;
    node *next;
};

int main() {
    node a = {1,NULL};
    node b = {2,NULL};
    node c = {3,NULL};
    node d = {4,NULL};

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;

    node *head = &a;
    cout<< (*head).data<< " ";
    cout<< head->next->next->data;

    while(head != NULL){
        cout<< head->data<< " ";
        head = head->next;
    }

    cout<<head->data;// here head is NULL means it came out from list
    return 0;
}


method 2.
  
  #include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;
        // node(int data){
        //     this->data = data;
        //     this->next = NULL;
        // }
        node(int x) {
            data = x;
            next = NULL;
        }
};

void printList(node *head){
    node *current = head;
    while(current != NULL){
        cout<< current->data<< " ";
        current = current->next;
    }
}

int main() {
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    printList(head);
}



method 3. 
  
#include<iostream>
using namespace std;
// todo: define a node type for linked list
// todo: create new nodes
// todo: link the nodes

struct node{
    int data;
    node *next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void printList(node *head){
    node *current = head;
    while(current != NULL){
        cout<< current->data<< " ";
        current = current->next;
    }
    cout<< endl;
}

int main() {
    
    
    int n, num;
    cin>> n;
    node *head, *tail;
    head = tail = new node(num);
    for(int i = 0; i < n; i++){
        cin>> num;
        tail->next = new node(num);
        tail = tail->next;
    }
    printList(head);
    return 0;
}


