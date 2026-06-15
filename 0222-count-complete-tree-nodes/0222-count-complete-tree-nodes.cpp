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
    void Count(TreeNode* root, int &count){
        if(!root) return;
        Count(root->left,count);
        Count(root->right,count);
        count++;
    }
    int countNodes(TreeNode* root) {
        int c=0;
        Count(root,c);
        return c;
    }
};