class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int s = intervals.size();
        int n = 0;
        for (int i = 0; i < s; i++) {
            for (int j = 0; j < s; j++) {
                if (i == j) continue;
                if (intervals[j][0] <= intervals[i][0] &&
                    intervals[i][1] <= intervals[j][1]) {
                    n++;
                    break;
                }
            }
        }
        return s - n;
    }
};