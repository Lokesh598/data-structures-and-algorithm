class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxNested = 0, curCount = 0;
        for (auto c: s) {
            if (c == '(') {
                curCount++;
                if (maxNested < curCount) maxNested = curCount;
            }
            else if (c == ')') {
                curCount--;
            }
        }
        return maxNested;
    }
};
