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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr) return nullptr;
        if(root->val==key) return sub(root);
        TreeNode* temp=root;
        while(temp!=nullptr){
            if(key>temp->val){
                if(temp->right!=nullptr && temp->right->val==key){
                    temp->right=sub(temp->right);
                    break;
                }
                else temp=temp->right;
            }
            else{
                if(temp->left!=nullptr && temp->left->val==key){
                    temp->left=sub(temp->left);
                    break;
                }
                else temp=temp->left;
            }
        }
        return root;
    }
    TreeNode* sub(TreeNode *root){
        if(root->right==nullptr) return root->left;
        else if(root->left==nullptr) return root->right;
        TreeNode* rchild=root->right;
        TreeNode* lchild=last(root->left);
        lchild->right=rchild;
        return root->left;
    }
    TreeNode* last(TreeNode* root){
        if(root->right==nullptr) return root;
        return last(root->right);
    }
};