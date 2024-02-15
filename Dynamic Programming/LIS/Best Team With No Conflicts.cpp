Maximum sum increasing subsequence.
example: 
    [1, 3, 5, 4, 7] = lis's [1, 3, 5, 7] and [1, 3, 4,7] max of both is 1+3+5+7 = 16 have to return.
class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {

        // we need to sort scores based on ages
        int n = scores.size();
        int lis[n];
        vector<pair<int,int>> nums(n, {0,0});
        for (int i = 0; i < n; i++) {
            nums[i].first = ages[i];
            nums[i].second = scores[i];
        }
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            lis[i] = nums[i].second;
            for (int j = 0; j < i; j++) {
                if (nums[j].second <= nums[i].second) {
                    lis[i] = max(lis[i], lis[j]+nums[i].second);
                }
            }
        }

        int res = lis[0];
        for (int i = 1; i < n; i++) {
            res = max(res, lis[i]);
        }
        return res;
    }
};
