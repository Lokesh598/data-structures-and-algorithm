class Solution {
public:
    int lcs(string s, string t) {
        int x = s.length();
        int y = t.length();

        int dp[x+1][y+1];
        memset(dp, 0, sizeof(dp));

        for (int i = 1; i < x+1; i++) {
            for (int j = 1; j < y+1; j++) {
                if (s[i-1] == t[j-1]) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[x][y];
    }
    int longestPalindromicSubsequence(string s) {
        string t = s;
        reverse(t.begin(), t.end());
        return lcs(s, t);
    }
    int minInsertions(string s) {
        return s.length() - longestPalindromicSubsequence(s);
    }
};
