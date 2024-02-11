class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        int x = s1.length();
        int y = s2.length();

        int dp[x+1][y+1];
        memset(dp, 0, sizeof(dp));

        for (int i = 1; i < x+1; i++) {
            for (int j = 1; j < y+1; j++) {
                if (s1[i-1] == s2[j-1]) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[x][y];
    }
};
