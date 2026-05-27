class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v;
        long long cr=1;
        for(int i=0;i<=rowIndex;i++){
            v.push_back(cr);
            cr=cr*(rowIndex-i)/(i+1);
        }
        return v;
    }
};