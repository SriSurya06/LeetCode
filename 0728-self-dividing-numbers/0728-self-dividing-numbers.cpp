class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> q;
        for(int i=left;i<=right;i++){
            int x=i;
            int p=0,c=0;
            while(x!=0){
                c=c+1;
                int r=x%10;
                if(r!=0 && i%r==0){
                    p=p+1;
                }
                x=x/10;
            }
            if(p==c) q.push_back(i);
        } 
        return q;
    }
};