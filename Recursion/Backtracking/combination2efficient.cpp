class Solution {
public:
    void backtrack(int l, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds) {

            if(target == 0) {
                ans.push_back(ds);
                return;
            }
        
        
        for(int i = l; i < arr.size(); i++) {
            if(i > l && arr[i] == arr[i-1]) continue;
            if(arr[i]>target) break;

            ds.push_back(arr[i]);
            backtrack(i+1, target-arr[i], arr, ans, ds);
            ds.pop_back();
        }
        // if(arr[l] <= target) {
        //     ds.push_back(arr[l]);
        //     backtrack(l+1, target-arr[l], arr, ans, ds);
        //     ds.pop_back();
        // }

        // backtrack(l+1, target, arr, ans, ds);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(), candidates.end());
        backtrack(0, target, candidates, ans, ds);

        // vector<vector<int>> res{ans.begin(), ans.end()};
        return ans;
    }
};
