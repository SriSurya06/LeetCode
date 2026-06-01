class Solution {
public:
    int minimumCost(vector<int>& cost) {
        stack<int> st;
        sort(cost.rbegin(),cost.rend());
        // cout<<cost[0];
        int c=0,s=0;
        for(int k:cost){
            if(c<2){
                st.push(k);
                s+=k;
                c++;
            }
            else{
                st.pop();
                st.pop();
                c=0;
            }
        }
        if(!st.size()){
            for(int i=0;i<st.size();i++){
                s+=st.top();
                st.pop();
            }
        }
        return s;
    }
};