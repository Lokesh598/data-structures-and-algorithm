1. brute forcce solution 
class Solution {
public:
    int numTrees(int n) {
        if(n <= 1) return 1;

        int ans = 0;
        for (int i = 1; i <= n; i++) {
            ans += numTrees(i-1) * numTrees(n-i);
        }

        return ans;
    }
};

2. memoization solution

class Solution {
public:
    int dp[20]{};
    int numTrees(int n) {
        if(n<=1) return 1;
        if(dp[n]) return dp[n];

        for(int i = 1; i <= n; i++) 
            dp[n] += numTrees(i-1) * numTrees(n-i); 

        return dp[n];
    }
};
