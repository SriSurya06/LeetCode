class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int a=0;
        for(int i=0;i<apple.size();i++){
            a+=apple[i];
        }
        int s=0,c=0;
        sort(capacity.begin(),capacity.end());
        for(int i=capacity.size()-1;i>=0;i--){
            s+=capacity[i];
            c++;
            if(s>=a) break;
        }
        return c;
    }
};