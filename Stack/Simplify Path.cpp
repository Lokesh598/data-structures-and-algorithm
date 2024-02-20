class Solution {
public:
    string simplifyPath(string path) {
        string res;
        int n = path.length();
        stack<string> st;
        //path: /../abc//./def/
        for (int i = 0; i < n; i++) {
            if (path[i] == '/') continue;
            string tmp; 
            while (i < n && path[i] != '/') {
                tmp += path[i];
                ++i;
            } 
            if (tmp == ".") continue;
            else if (tmp == "..") {
                if (!st.empty()) st.pop();
            }
            else st.push(tmp);
        }

        while (!st.empty()) {
            res = '/' + st.top() + res;
            st.pop();
        }
        if (res.size() == 0) return "/";
        return res;
    }
};
