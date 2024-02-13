class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

        intervals.push_back(newInterval);

        if(intervals.size()<=1) return intervals;

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> output;

        output.push_back(intervals[0]);

        for(int i = 1; i < intervals.size(); i++) {
            if(output.back()[1] >= intervals[i][0]) 
                output.back()[1] = max(output.back()[1], intervals[i][1]);

            else output.push_back(intervals[i]);
        }
        return output;
    }
};
