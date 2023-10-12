//Brute Force solution

class Solution{
    public:
    int height(Node *node) {
        if(node == nullptr) return 0;
        if(node->left == nullptr && node->right == nullptr) 
            return 1;
        int l = height(node->left);
        int r = height(node->right);
        return 1+max(l, r);
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *node)
    {
        //  Your Code here
        if(node == nullptr) return true;
        int lh = height(node->left);
        int rh = height(node->right);
        int dif = abs(rh-lh);
        if (dif <= 1 && isBalanced(node->left) && isBalanced(node->right)){
            return 1;
        }
        return 0;
    }
};


//Efficent Solutions

class Solution{
    bool flag =true;
    public:
    int traverse(Node *node) {
        if(node == nullptr) return 0;
        
        int l = traverse(node->left);
        int r = traverse(node->right);
        
        if(abs(l - r) > 1) flag = false;
        
        return 1+max(l, r);
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *node)
    {
        //  Your Code here
        traverse(node);
        return flag;
    }
};
