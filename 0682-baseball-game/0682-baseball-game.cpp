class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int res=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i][0]!='+' && operations[i][0]!='D' && operations[i][0]!='C'){
                int g=stoi(operations[i]);
                st.push(g);
            }
            else if(operations[i][0]=='+'){
                int temp=st.top();
                st.pop();
                int s=st.top()+temp;
                st.push(temp);
                st.push(s);
            }
            else if(operations[i][0]=='D'){
                int temp=st.top();
                st.push(temp*2);
            }
            else if(operations[i][0]=='C') st.pop();
        }
        
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        return res;
    }
};