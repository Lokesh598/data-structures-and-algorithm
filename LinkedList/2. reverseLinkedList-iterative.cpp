here both nive and efficent solution implemented


naive approched function

Node *revList(Node *head){
    vector<int> arr;
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        arr.push_back(curr->data);
    }
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        curr->data=arr.back();
        arr.pop_back();
    }
    return head;
}


approch 2. optimize solution

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

// 
// node *reverseLL(node *head){
//     node *curr = head;
//     node *prev = NULL;
//     node *next = NULL;
//     while(curr != NULL){
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }
node *reverseList(node *head) {
    node *curr = head;
    node *p, *q = NULL;

    while(curr!=NULL) {
        p = q;
        q = curr;
        curr = curr->next;
        q->next = p;
    }
    return q;
}
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
    head = reverseList(head);
    cout<<endl;
    printList(head);
    return 0;
}
