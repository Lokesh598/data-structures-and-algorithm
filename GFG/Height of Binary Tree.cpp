class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node == nullptr) return 0;
        if(node->left == nullptr && node->right == nullptr) 
            return 1;
        int l = height(node->left);
        int r = height(node->right);
        return 1+max(l, r);
    }
};
