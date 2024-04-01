class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int right = s.length()-1;

        while (right>=0) {
            if (s[right] != ' ') length++;
            if (s[right] == ' ' && length > 0) return length;
            right--;
        }
        return length;
    }
};
