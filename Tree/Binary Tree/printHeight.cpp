// height of tree

int printHeight(Node *root) {
  
  // boundry cases
  if(root == NULL) 
    return 1;
  // go left
  int hl = 1 + printHeight(root->left);
  // go right
  int hr = 1 + printHeight(root->right);
  
  int h = max(hl, hr);
}
