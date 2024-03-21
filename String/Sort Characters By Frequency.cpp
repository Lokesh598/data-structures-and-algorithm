class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }

        vector<pair<char, int>> pairs;
        for (auto &it: mp) {
            pairs.push_back(it);
        }
        sort(pairs.begin(), pairs.end(), [](auto &a, auto &b){return a.second > b.second;});

        string res = "";
        for (auto &pair: pairs) {
            for (int i = 0; i < pair.second; i++) {
                 res.push_back(pair.first);
            }
        }
        return res;
    }
};
