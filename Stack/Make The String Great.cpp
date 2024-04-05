class Solution {
public:
    std::string makeGood(string s) {
        std::stack<char> stack;
        for (auto c: s) {
            if (!stack.empty() && std::abs(c - stack.top()) == 32) {
                stack.pop();
            } else stack.push(c);
        }

        std::string result;
        while (!stack.empty()) {
            result = stack.top() + result;
            // result.push_back(stack.top());
            stack.pop();
        }
        return result;
    }
};
