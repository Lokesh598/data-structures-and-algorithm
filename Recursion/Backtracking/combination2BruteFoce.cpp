//40. Combination Sum II

Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]

  This solution will give TLE

class Solution {
public:
    void backtrack(int l, int target, vector<int> &arr, set<vector<int>> &ans, vector<int> &ds) {

        if(l == arr.size()) {
            if(target == 0) {
                ans.insert(ds);
            }
            return;
        }

        if(arr[l] <= target) {
            ds.push_back(arr[l]);
            backtrack(l+1, target-arr[l], arr, ans, ds);
            ds.pop_back();
        }

        backtrack(l+1, target, arr, ans, ds);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(), candidates.end());
        backtrack(0, target, candidates, ans, ds);

        vector<vector<int>> res{ans.begin(), ans.end()};
        return res;
    }
};
