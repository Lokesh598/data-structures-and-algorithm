Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> mp;

        vector<vector<string>> res;

        for (auto x: strs) {
            string word = x;
            sort(word.begin(), word.end());
            mp[word].push_back(x);
        }

        for (auto str : mp) {
            res.push_back(str.second);
        }
        return res;
    }
};
