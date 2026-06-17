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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> mapping;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            TreeNode* curr=node.first;
            int col=node.second.first;
            int row=node.second.second;
            mapping[col][row].insert(curr->val);
            if(curr->left) q.push({curr->left,{col-1,row+1}});
            if(curr->right) q.push({curr->right,{col+1,row+1}});
        }
        vector<vector<int>> res;
        for(auto k:mapping){
            vector<int> vec;
            for(auto l:k.second){
                vec.insert(vec.end(),l.second.begin(),l.second.end());
            }
            res.push_back(vec);
        }
        return res;
    }
};