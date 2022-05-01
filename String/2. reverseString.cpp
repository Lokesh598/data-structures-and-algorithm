// program for reverse string
// Input: hello world
// Output: dlrow olleh

#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    void reverseString(string &s) {
        int n = s.size();
        for(int i = 0; i < n/2; i++) {
            char temp = s[i];
            s[i] = s[n-1-i];
            s[n-1-i] = temp;
        }
    }
};
void printString(string str, int n) {
    for(int i = 0; i < n; i++) {
        cout << str[i] ;
    }
    cout<<endl;
}
int main() {
    string str = "hello world";
    int n = str.length();
    printString(str, n);
    Solution s;
    s.reverseString(str);

    cout << "string after reverse" <<endl;
    printString(str, n);
    return 0;
}
