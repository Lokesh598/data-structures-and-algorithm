// reverse string by words without extra space

// input: "the sky is blue"
// output: "blue is sky the"

#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    void reverse(string &s, int start, int end) {
        while (start < end) {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
    }
public:
    void reverseWords(string &s) {
        int i = 0;
        int j = 0;
        int len = s.length();
        while (i < len) {
            while (i < len && s[i] == ' ') {
                i++;
            }
            j = i;
            while (i < len && s[i] != ' ') {
                i++;
            }
            reverse(s, j, i - 1);
        }
        reverse(s, 0, len - 1);
    }
};

void printString(string s) {
    for (int i = 0; i < s.length(); i++) {
        cout << s[i];
    }
    cout << endl;
}
int main() {
    string s = "the sky is blue";
    int n = s.length();
    Solution sol;
    printString(s);
    cout<<endl;
    sol.reverseWords(s);
    printString(s);
    return 0;
}

