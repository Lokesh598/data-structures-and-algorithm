class Solution {
public:
    long long countSubarrays(vector<int>& nums, int mink, int maxk) {
        long long res = 0;

        int bad_id = -1, l_idx = -1, r_idx = -1;

        for (int i = 0; i < nums.size(); ++i) {
            if (!(mink <= nums[i] && nums[i] <= maxk)) {
                bad_id = i;
            } 
            if (nums[i] == mink) l_idx = i;
            if (nums[i] == maxk) r_idx = i;

            res += max(0, min(l_idx, r_idx) - bad_id);
        }
        return res;
    }
};
