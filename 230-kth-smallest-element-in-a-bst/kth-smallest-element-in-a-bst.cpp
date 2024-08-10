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
    int kthSmallest(TreeNode* root, int k) {
        int count=0;
        int ans;

        traverse(root,k,count,ans);
        return ans;
    }
    void traverse(TreeNode* root,int k,int &count,int &ans){

        if(root==NULL){
            return ;
        }
        traverse(root->left,k,count,ans);
        count++;

        if(count==k){
            ans=root->val;
        }
        traverse(root->right,k,count,ans);
    }
};