class Solution{
    void findAllPath(int r, int c, int n, vector<vector<int>> &m, string ans, vector<string> &ds) {
        
        if(r<0 or r >=n or c<0 or c>=n or m[r][c] == 0) {
            return;
        }
        
        if(r == n-1 and c == n-1) {
            ds.push_back(ans);
            return;
        }
        
        m[r][c] = 0;
        findAllPath(r+1, c, n, m, ans +"D", ds);
        findAllPath(r, c-1, n, m, ans +"L", ds);
        findAllPath(r, c+1, n, m, ans +"R", ds);
        findAllPath(r-1, c, n, m, ans +"U", ds);
        m[r][c] = 1;
        
        return;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        string ans = "";
        vector<string> ds;
        findAllPath(0, 0, n, m, ans, ds);
        sort(ds.begin(), ds.end());
        return ds;
    }
};
