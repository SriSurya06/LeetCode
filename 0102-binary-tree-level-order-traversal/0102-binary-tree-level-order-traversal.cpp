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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root==nullptr) return v;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int qsize=q.size();
            vector<int> st;
                for(int i=0;i<qsize;i++){
                TreeNode* curr=q.front();
                q.pop();
                st.push_back(curr->val);
                if(curr->left !=nullptr) q.push(curr->left);
                if(curr->right != nullptr) q.push(curr->right);
            }
            v.push_back(st);
        }
        return v;

    }
};