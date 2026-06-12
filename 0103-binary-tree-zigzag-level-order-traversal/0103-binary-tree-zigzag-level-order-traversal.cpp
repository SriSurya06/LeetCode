/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root==nullptr) return v;
        queue<TreeNode*> q;
        q.push(root);
        int f=0;
        while(!q.empty()){
            int len=q.size();
            vector<int> st;
            while(len--){
                TreeNode* temp=q.front();
                q.pop();
                st.push_back(temp->val);
                if(temp->left!=nullptr) q.push(temp->left);
                if(temp->right!=nullptr) q.push(temp->right);
            }
            if(f==0){
                v.push_back(st);
                f=1;
            }
            else{
                reverse(st.begin(),st.end());
                v.push_back(st);
                f=0;
            }
        }
        return v;
    }
};