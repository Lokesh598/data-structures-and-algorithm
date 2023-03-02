this is the method for insert node in bst//
Node *insertNode(Node* root, int key) {
	if(root == NULL) return new Node(key);
	
	if(key < root->key) 
		root->left = insertNode(root->left, key);
		
	if(key > root->key) 
		root->right = insertNode(root->right, key);
	
	return root;
}
