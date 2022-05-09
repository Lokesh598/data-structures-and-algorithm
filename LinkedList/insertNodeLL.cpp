// A node can be added at the
// 1. beginning 
// 2. After a given node
// 3. at the last of list

#include<iostream>
using namespace std;

struct node {
    int val;
    node *next;
    node(int x) {
        val = x;
        next = nullptr;
    }
};

class Solution {
public:
    // head, node
    // position where want to insert

    node *insertAtBeginnning(node *head, int new_data) {
        //todo: create node
        node *temp = new node(new_data);
        temp->next = head;
        head = temp;
        return head;
    }
    void insertAfterNode(node *Node, int new_data) {
        node *temp = new node(new_data); // assigned data to the 
        temp->next = nullptr;
        if(Node == NULL) {
            cout << "Node can not be NULL";
            return; 
        }
        temp->next = Node->next;
        Node->next = temp;
        return;
    }
  
    void insertAtTheEnd(node *head, int new_data) {
        node *temp = new node(new_data);
        temp->next = nullptr;
        node *cur = head;
        if(cur == nullptr) {
            cur = temp;
        }
        while(cur->next != nullptr) {
            cur = cur->next;
        }
        cur->next = temp;
        return;
    }
};
void printList(node *head) {
    node *cur = head;
    while(cur!=NULL) {
        cout << cur->val;
        cur=cur->next;
    }
    cout<< endl;
}
int main() {
    Solution s;

    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    int data = 5;
    int opt;
    cout << "Press 0 for add at beginning"<< endl;
    cout << "Press 1 for add at after a node" << endl;
    cout << "press 2 for add at the end" <<endl;
    cout << "where you want to add a node: ";

    cin >> opt;
    switch (opt)
    {
    case 0:
        /* code */
        
        head = s.insertAtBeginnning(head, data);
        printList(head);
        break;
    case 2:
        s.insertAtTheEnd(head, data);
        printList(head);
        break;
    case 1: 
        s.insertAfterNode(head->next, data);
        printList(head);    
        break;
    default:

        break;
    }
    return 0;
}


