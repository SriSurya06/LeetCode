class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> q(n,"");
        string a="Fizz";
        string b="Buzz";
        for(int i=0;i<n;i++){
            if((i+1)%3==0 && (i+1)%5==0) q[i]=q[i]+a+b;
            else if((i+1)%5==0) q[i]=q[i]+b;
            else if((i+1)%3==0) q[i]=q[i]+a;
            else q[i]=q[i]+to_string(i+1);
        }
        return q;
    }
};