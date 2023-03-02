#include<iostream>
using namespace std;

struct Node {
	int key;
	struct Node *left;
	struct Node *right;
	Node(int k) {
		key = k;
		left = right = NULL;
	}
};

void inorder(Node* root) {
	if(root != NULL) {
		inorder(root->left);
		cout<<root->key<<"->";
		inorder(root->right);
	}
}
int main() {
	Node *root = new Node(10);
	root->left = new Node(2);
	root->right = new Node(11);
	root->left->left = new Node(1);
	root->left->right = new Node(4);
	inorder(root);
}
