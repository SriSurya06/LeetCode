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
    bool palindrome(vector<int> nums){
        int i=0,j=nums.size()-1;
        while(i<j){
            if(nums[i]==nums[j]){
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }
    bool isSymmetric(TreeNode* root) {
        if(root->left==nullptr && root->right==nullptr) return true;
        vector<int> v;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int len=q.size();
            vector<int> pal;
            while(len--){
                TreeNode* temp=q.front();
                q.pop();
                if(temp==nullptr){
                    pal.push_back(-101);
                    q.push(nullptr);
                    q.push(nullptr);
                }
                else{
                    pal.push_back(temp->val);
                    q.push(temp->left);
                    q.push(temp->right);
                }
            }
            if(!palindrome(pal)) return false;
            int count=pal.size();
            for(int i=0;i<pal.size();i++){
                if(pal[i]==-101) count--;
            }
            if(count==0) break;
            
        }
        return true;
    }
};