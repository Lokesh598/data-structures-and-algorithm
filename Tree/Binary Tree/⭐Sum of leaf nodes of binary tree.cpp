// Program to find the sum of leaf nodes of a binary tree
#include <iostream>
#include <queue>
using namespace std;

// Tree template
class TreeNode {
public:
    int val;
    bool canTakeChild;
    TreeNode* left;
    TreeNode* right;
    TreeNode* next;

    // Init constructor
    TreeNode(int val, TreeNode* left, TreeNode* right)
    :
    val(val), canTakeChild(true), left(left), right(right), next(nullptr) {}

    // Init destructor
    ~TreeNode() {
        if(left) {
            delete left;
        }
        if(right) {
            delete right;
        }
    }
};

// #1 Solution class:
class Solution_V1 {
public:
    // #1 Method to find the sum of the leaf nodes, using recursion only - O(N) & O(H)
    int sumAllLeaves(TreeNode* root) {
        // Edge case: When the tree is empty.
        if(!root)
            return 0;

        // Edge case: Return the node value, if current is the leaf node.
        if(!root->left && !root->right)
            return root->val;

        // Stores the sum of the leaf nodes.
        int sum = 0;

        // Recursively calculate the sum from the left and the right subtree.
        sum += sumAllLeaves(root->left);
        sum += sumAllLeaves(root->right);

        // Return the sum of the leaf nodes.
        return sum;
    }
};

// #2 Solution class:
class Solution_V2 {
public:
    // #2 Method to find the sum of the leaf nodes, using bfs - O(N) & O(N)
    int sumAllLeaves(TreeNode* root) {
        // Edge case: When the tree is empty.
        if(!root)
            return 0;

        queue<TreeNode*> q;
        q.push(root);

        // Stores the sum of the leaf nodes.
        int sum = 0;

        while(!q.empty()) {
            root = q.front(); q.pop();
            // Add the node value to the "sum", if current is the leaf node.
            if(!root->left && !root->right) 
                sum += root->val;
            // If the left child of the current node exists, then store it to the "queue".
            if(root->left) 
                q.push(root->left);
            // If the right child of the current node exists, then store it to the "queue".
            if(root->right) 
                q.push(root->right);
        }

        // Return the sum of the leaf nodes.
        return sum;
    }
};

// #3 Solution class:
class Solution_V3 {
public:
    // #3 Method to find the sum of the leaf nodes, using constant space without preserving the tree structure - O(N) & O(1)
    int sumAllLeaves(TreeNode* root) {
        // Stores the sum of the leaf nodes.
        int sum = 0;

        while(root) {
            vector<TreeNode*> child;
            if(root->left) child.push_back(root->left);
            if(root->right) child.push_back(root->right);
            int n = child.size();
            // If current is the leaf node then add its value to the "sum", and then move to the next node.
            if(!root->left && !root->right) {
                sum += root->val;
                root = root->next;
            }
            // Else when its possible to take the childrens of the current node.
            else if(root->canTakeChild) {
                // Mark the childrens as untakable for the next time, to avoid revisiting the childrens.
                root->canTakeChild = false;
                // If both the childrens are present then link the left child with the right child.
                if(n == 2) child[0]->next = child[1];
                // Link the right children to its parent node/current node.
                child[n-1]->next = root;
                // Move to the first children.
                root = child[0];
            }
            // Else when its not possible to take the childrens of the current node then simply move to the next node.
            else {
                root = root->next;
            }
        }

        // Return the sum of the leaf nodes.
        return sum;
    }
};

// #4 Solution class:
class Solution_V4 {
public:
    // #4 Method to find the sum of the leaf nodes, using constant space with preserving the tree structure - O(N) & O(1)
    int sumAllLeaves(TreeNode* root) {
        // Stores the sum of the leaf nodes.
        int sum = 0;

        while(root) {
            vector<TreeNode*> child;
            if(root->left) child.push_back(root->left);
            if(root->right) child.push_back(root->right);
            int n = child.size();
            // If current is the leaf node then add its value to the "sum", and then move to the next node.
            if(!root->left && !root->right) {
                sum += root->val;
                root = root->next;
            }
            // Else when its possible to take the childrens of the current node.
            else if(root->canTakeChild) {
                // Mark the childrens as untakable for the next time, to avoid revisiting the childrens.
                root->canTakeChild = false;
                // If both the childrens are present then link the left child with the right child.
                if(n == 2) child[0]->next = child[1];
                // Link the right children to its parent node/current node.
                child[n-1]->next = root;
                // Move to the first children.
                root = child[0];
            }
            // Else when its not possible to take the childrens of the current node.
            else {
                // If both the childrens are present then unlink the left child from the right child.
                if(n == 2) child[0]->next = nullptr;
                // Unlink the last children from its parent node/current node.
                child[n-1]->next = nullptr;
                // Simply move to the next node of the current node.
                root = root->next;
            }
        }

        // Return the sum of the leaf nodes.
        return sum;
    }
};

// Method to print the tree using inOrder traversal
void printTree(TreeNode* root) {
    if(root) {
        printTree(root->left);
        cout<<root->val<<' ';
        printTree(root->right);
    }
}

// Driver code
int main() {
    // Creating, connecting nodes and initializing their data.
    TreeNode* c5 = new TreeNode(4, nullptr, nullptr);
    TreeNode* c4 = new TreeNode(7, nullptr, c5);
    TreeNode* c3 = new TreeNode(6, nullptr, nullptr);
    TreeNode* c2 = new TreeNode(9, c3, nullptr);
    TreeNode* c1 = new TreeNode(8, c4, nullptr);
    TreeNode* rt = new TreeNode(5, c1, c2);

    // Print call
    printTree(rt);

    // Call to find the sum of the leaf nodes
    Solution_V4 obj;
    int sum = obj.sumAllLeaves(rt);
    cout<<"\nThe sum of the leaf nodes is : "<<sum;

    // Deletion call
    delete rt;

    return 0;
}
