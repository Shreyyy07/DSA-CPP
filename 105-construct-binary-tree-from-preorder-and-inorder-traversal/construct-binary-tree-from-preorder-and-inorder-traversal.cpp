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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>mapp;

        for(int i=0; i<inorder.size(); i++){
            mapp[inorder[i]]=i;
        }
       TreeNode* root = buildTree(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1, mapp);
            return root;
        }

        private:
       TreeNode* buildTree(vector<int>& preorder,int preS,int preE, vector<int>& inorder, int inS, int inE,map<int,int>&mapp){

            if(preS>preE || inS>inE){
                return NULL;
            }
            
            TreeNode* root=new TreeNode(preorder[preS]);
            int inroot=mapp[root->val];
           int numLeft=inroot-inS;
            root->left=buildTree(preorder,preS+1,preS+numLeft,inorder,inS,inroot-1,mapp);
            root->right=buildTree(preorder,preS+numLeft+1,preE,inorder,inroot+1,inE,mapp);
        
        return root;
    }
};