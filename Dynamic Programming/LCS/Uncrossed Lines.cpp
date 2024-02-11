class Solution {
public:
    int maxUncrossedLines(vector<int>& a, vector<int>& b) {
        int x = a.size();
        int y = b.size();

        int dp[x+1][y+1];
        memset(dp, 0, sizeof(dp));

        for (int i = 1; i < x+1; i++) {
            for (int j = 1; j < y+1; j++) {
                if (a[i-1] == b[j-1]) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                    // break;
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[x][y];
    }
};
