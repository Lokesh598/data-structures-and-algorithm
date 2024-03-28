class Solution {
public:
//using divide and conqure
    int longestSubstring(string s, int k) {
        return helper(s, 0, s.length(), k);
    }
    int helper(string &s, int start, int end, int k) {
        if (end-start<k) return 0;
        // unordered_map<char, int> count;
        int count[26] = {0};
        for (int i = start; i < end; i++) {
            count[s[i]-'a']++;
        }
      
        for (int i = start; i < end; i++) {
            if (count[s[i]-'a'] < k) {
                int j = i+1; // i = mid and j = midNext
                while (j<end && count[s[j]-'a']<k) j++;

                return max(helper(s, start, i, k), helper(s, j, end, k));
            }
        }
        return end-start;
    }
};
