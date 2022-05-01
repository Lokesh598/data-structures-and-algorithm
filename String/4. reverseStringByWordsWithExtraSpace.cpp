// reverse string by words with extra space

// description:
// input: "the sky is blue"
// output: "blue is sky the"


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s = "the sky is blue";
    vector<string> v;
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            v.push_back(temp);
            temp = "";
        }
        else {
            temp += s[i];
        }
    }
    v.push_back(temp);
    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
