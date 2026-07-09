class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        string res="";
        long long sum=0;
        for(char k:s){
            if(k!='0') res+=k;
            sum+=(k-'0');
        }
        if(res=="") return 0;
        return sum*stoi(res);
    }
};