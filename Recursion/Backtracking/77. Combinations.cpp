class Solution {
public:
    vector<vector<int>> ans;
    void backTrack(int ind, int k, int n, vector<int> &ds) {
        if(k == 0) {
            ans.push_back(ds);
            return;
        }
        for(int i = ind; i <= n; i++) {
            ds.push_back(i);
            backTrack(i+1, k-1, n, ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> ds;
        backTrack(1, k, n, ds);

        return ans;
    }
};
