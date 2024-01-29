Container With Most Water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int max_area = 0;
        while(left<right) {
            int lh = height[left];
            int rh = height[right];

            max_area = max(max_area, (right-left)*min(lh,rh));
            if (lh<rh) ++left;
            else --right;
        }
        return max_area;
    }
};
