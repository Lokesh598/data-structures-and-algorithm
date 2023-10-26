class Solution {
public:
    void backtrack(int l, int n, vector<string> &ds, string str) {

        if(n==0 && l==0){
            ds.push_back(str);
            return;
        }

        
        if(n > 0) {
            //left call
            backtrack(l+1, n-1, ds, str+"(");
        }

        if(l > 0) {
            // right call
            backtrack(l-1, n, ds, str+")");
        }
        
    }
    vector<string> generateParenthesis(int n) {
        
        vector<string> ds;

        backtrack(0, n, ds, "");
        return ds;

    }
};
