class Solution {
public:
    string defangIPaddr(string address) {
        string s="";
        int i=0;
        int t=address.size();
        while(t>0){
            if(address[i]=='.'){
                s+='[';
                s+='.';
                s+=']';
            }
            else{
                s+=address[i];
            }
            i++;
            t--;
        }
        return s;
    }
};