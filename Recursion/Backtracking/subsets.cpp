// leetcode 78.

Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]


  class Solution {
    void powerSets(int i, vector<int> &nums, vector<int> &ds, vector<vector<int>> &powerSet) {
        
        int n = nums.size();
        if(i == n) {
            powerSet.push_back(ds);
            return;
        }


        ds.push_back(nums[i]);
       
        //left subtree
        powerSets(i+1, nums, ds, powerSet);

        ds.pop_back();
        powerSets(i+1, nums, ds, powerSet);
    
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> powerSet;
        vector<int> ds;
        powerSets(0, nums, ds, powerSet);
        return powerSet;
    }
};
