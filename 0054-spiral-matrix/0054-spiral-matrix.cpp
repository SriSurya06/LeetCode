class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0,rt=matrix[0].size()-1;
        int bot=matrix.size()-1,lt=0;
        vector<int> v;
        while(top<=bot && lt<=rt){
            for(int i=top;i<=rt;i++){
                v.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bot;i++){
                v.push_back(matrix[i][rt]);
            }
            rt--;
            if(top<=bot){
            for(int i=rt;i>=lt;i--){
                v.push_back(matrix[bot][i]);
            }
            bot--;
            }
            if(lt<=rt){
            for(int i=bot;i>=top;i--){
                v.push_back(matrix[i][lt]);
            }
            lt++;
            }
        }
        return v;
    }
};