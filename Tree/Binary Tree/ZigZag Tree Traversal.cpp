Input:
        1
      /   \
     2     3
    / \   /  \
   4   5 6    7
Output:
1 3 2 4 5 6 7

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	//writing for level order traversal
    	vector<int> res;
    	queue<Node*> q;
    	q.push(root);
    	
    	bool isLeftToRight = true;
    	while(!q.empty()) {
    	    int size = q.size();
    	    vector<int> ans(size);
    	    for(int i = 0; i<size; i++) {
    	        Node* tmp = q.front();
    	        q.pop();
    	       // ans.push_back(tmp->data);
    	        int index = isLeftToRight ? i : size - i - 1;
    	        ans[index] = tmp->data;
    	        if(tmp->left != nullptr) 
    	            q.push(tmp->left);
    	        if(tmp->right != NULL) 
    	            q.push(tmp->right);
    	    }
    	    isLeftToRight = !isLeftToRight;
    	    for(auto i: ans) {
    	        res.push_back(i);
    	    }
    	}
    	return res;
    }
};
