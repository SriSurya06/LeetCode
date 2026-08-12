class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+" && tokens[i]!="*" && tokens[i]!="-"&& tokens[i]!="/" ){
                int g=stoi(tokens[i]);
                st.push(g);
            }
            else if(tokens[i]=="+"){
                int temp=st.top();
                st.pop();
                temp+=st.top();
                st.pop();
                st.push(temp);
            }
            else if(tokens[i]=="-"){
                int temp=st.top();
                st.pop();
                int temp2=st.top();
                st.pop();
                st.push(temp2-temp);
            }
            else if(tokens[i]=="*"){
                int temp=st.top();
                st.pop();
                temp*=st.top();
                st.pop();
                st.push(temp);
            }
            else if(tokens[i]=="/"){
                int temp=st.top();
                if(temp==0) continue;
                st.pop();
                int temp2=st.top();
                st.pop();
                st.push(temp2/temp);
            }
        }
        return st.top();
    }
};