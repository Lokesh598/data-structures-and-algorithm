class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int left = 0, right = 0, sub_arr = 0;
        unordered_map<int, int> mp;

        while (right < nums.size()) {
            mp[nums[right]]++;

            while (mp[nums[right]] > k) {
                mp[nums[left]]--;
                left++;
            }

            sub_arr = max(sub_arr, right - left + 1);
            right++;
        }
        return sub_arr;
    }
};
