class Solution {
public:
    const int MOD=1e9+7;    
    int prime(int n){
        if(n<=1) return false;
        if(n==2)return true;
        for(int i=2;i*i<=n;i++){
            if(n!=2 && n%i==0) return false;
        }
        return true;
    }
    long long fact(int n){
        long long s=1;
        for(int i=1;i<=n;i++){
            s=(s*i)%MOD;
        }
        return s;
    }
    int numPrimeArrangements(int n) {
        int p=0,np=0;
        for(int i=1;i<=n;i++){
            if(prime(i)) p++;
            else np++;
        }
        return (fact(np)*fact(p))%MOD;
    }
};