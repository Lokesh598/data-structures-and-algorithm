void convert(Node *head, TreeNode *&root) {
    // Your code here
    //inordertraversal
    queue<TreeNode**> q;
    q.push(&root);
    
    
    while(!q.empty()) {
        int t = q.size();
        
        for(int i = 0; i<t; i++) {
            TreeNode *node = *q.front();
            q.pop();
            
            if(node == nullptr) {
                node = root = new TreeNode(head->data);
                head = head->next;
            }
            
            if(head) {
                node->left = new TreeNode(head->data);
                head = head->next;
            }
            if(head) {
                node->right = new TreeNode(head->data);
                head = head->next;
            }
            if(node->left)
                q.push(&(node->left));
            if(node->right)
                q.push(&(node->right));
        }
        
    }
}
