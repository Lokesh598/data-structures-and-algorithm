class Solution {
public:
    bool checkValidString(string s) {
        int cmax = 0, cmin = 0;

        for (char c: s) {
            if (c == '(') {
                cmax++; cmin++;
            } else if (c == ')') {
                cmax--; cmin--;
            } else if (c =='*') {
                cmax++; cmin--;
            }

            if (cmax<0) return false;
            cmin = max(cmin, 0);
        }
        return cmin == 0;
    }
};
