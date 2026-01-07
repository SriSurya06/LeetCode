class Solution {
public:
    char kthCharacter(int k) {
        string str="a";
        while(str.size()<k){
            string h="";
            for(char c:str){
                h+=(char(97+((int)c-96)));
            }
            str+=h;
        }
        return str[k-1];
    }
};