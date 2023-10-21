448. Find All Numbers Disappeared in an Array

Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]

//solution : naive (boolean array
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        vector<int> mark(n+1, 0); //boolean array
        vector<int> res;
        for(int i = 0; i < n; i++) {
            mark[nums[i]]++; 
        }
        for(int i = 1; i<n+1;i++) {
            if(mark[i] == 0){
                res.push_back(i);
            }
        }
        return res;
    }
};

//solution : efficient
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size();
        for(int i=0; i<len; i++) {
            int m = abs(nums[i])-1; // index start from 0
            nums[m] = nums[m]>0 ? -nums[m] : nums[m];
        }
        vector<int> res;
        for(int i = 0; i<len; i++) {
            if(nums[i] > 0) res.push_back(i+1);
        }
        return res;
    }
};

