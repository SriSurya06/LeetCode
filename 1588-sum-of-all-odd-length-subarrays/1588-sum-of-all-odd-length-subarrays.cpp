class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int t=0;
        for(int i=0;i<arr.size();i++){
            int s=((i+1)*(arr.size()-i));
            if(s%2==0) t=t+(s/2)*arr[i];
            else t=t+(1+(s/2))*arr[i];
        }
        return t;
    }
};