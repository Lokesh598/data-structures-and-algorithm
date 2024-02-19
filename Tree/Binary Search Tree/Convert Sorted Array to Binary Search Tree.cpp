class Solution {
public:
    TreeNode* utils(vector<int>& nums, int left, int right) {

        if (left > right) return nullptr;
        int mid = left + (right - left)/2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = utils(nums, left, mid-1);
        root->right = utils(nums, mid+1, right);

        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return utils(nums, 0, nums.size()-1);
    }
};
