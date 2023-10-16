//leetcode 90 

Given an integer array nums that may contain duplicates, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]

class Solution {
    void allSubs(int i, vector<int> &nums, vector<int> &ds, set<vector<int>> &res) {
        if(i == nums.size()) {
            res.insert(ds);
            return;
        }
        ds.push_back(nums[i]);
        allSubs(i+1, nums, ds, res);
        ds.pop_back();
        allSubs(i+1, nums, ds, res);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> res;
        vector<int> ds;
        sort(nums.begin(), nums.end());
        allSubs(0, nums, ds, res);
        vector<vector<int>> ans{res.begin(), res.end()};
        return ans;
    }
};
