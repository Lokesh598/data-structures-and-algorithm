class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        vector<int> count(2, 0);
        int n = students.size();
        for (int student: students) 
            count[student]++;

        for (int i = 0; i < n; i++) {
            if (count[sandwiches[i]] == 0) return n - i;
            count[sandwiches[i]]--;
        }
        return 0;
    }
};
