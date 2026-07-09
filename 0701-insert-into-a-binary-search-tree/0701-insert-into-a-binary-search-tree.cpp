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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *node = new TreeNode(val);
        if(root==nullptr) return node;
        TreeNode* temp=root;
        while(temp){
            if(temp->val < val){
                if(temp->right!=nullptr) temp=temp->right;
                else {
                    temp->right=node;
                    break;
                }
            }
            else{
                if(temp->left!=nullptr) temp=temp->left;
                else{
                    temp->left=node;
                    break;
                }
            }
        }
        return root;
    }
};