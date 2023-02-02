Input:
          1
       /    \
      2      3
     / \    / \
    4   5  6   7
            \   \
             8   9
Output: 6
Explanation: The width of a binary tree is
the number of vertical paths in that tree.
  
  void width(Node* root, int level, unordered_set<int> &set) {
    if(root==nullptr) return;
    
    set.insert(level);
    width(root->left, level-1, set);
    width(root->right, level+1, set);
}

//Function to find the vertical width of a Binary Tree.
int verticalWidth(Node* root)
{
    // Code here
    unordered_set<int> s;
    width(root, 0, s);
    return s.size();
}
