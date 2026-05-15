class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> v;
        int a=intervals[0][0];
        int b=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=b) {
                b=max(intervals[i][1],b);
            }
            else{
                v.push_back({a,b});
                a=intervals[i][0];
                b=intervals[i][1];
            }
        }
        v.push_back({a,b});
        return v;
    }
};