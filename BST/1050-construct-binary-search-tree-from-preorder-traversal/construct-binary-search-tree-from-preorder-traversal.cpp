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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
         int i=0;//to keep track of elements of array//

         return solve(preorder,i,INT_MAX);
    }
    TreeNode* solve(vector<int>& preorder,int &i,int ub){
        if(i == preorder.size() || preorder[i] > ub){
            return NULL;
        }
        TreeNode* root=new TreeNode(preorder[i++]);
        root->left=solve(preorder,i,root->val);
        root->right=solve(preorder,i,ub);

        return root;
    }
};