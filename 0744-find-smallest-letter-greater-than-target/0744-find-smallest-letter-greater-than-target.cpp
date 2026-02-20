class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0,h=letters.size()-1,mid;
        if(letters[0]>target || letters[h]<=target) return letters[0];
        while(l+1<h){
            mid=(l+h)/2;
            if(letters[mid]<=target) l=mid;
            else h=mid;
        }
        return letters[h];
        // for(int i=0;i<letters.size();i++){
        //     if(letters[i]>target) return letters[i];
        // }
    }
};