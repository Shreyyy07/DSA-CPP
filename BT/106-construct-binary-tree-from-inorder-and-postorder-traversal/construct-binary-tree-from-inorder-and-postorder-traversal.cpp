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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int>mapp;

        for(int i=0; i<inorder.size(); i++){
            mapp[inorder[i]]=i;
        }
        TreeNode* root=buildTree(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,mapp);
        return root;
    }

        private:
       TreeNode* buildTree(vector<int>& inorder,int inS,int inE, vector<int>& postorder, int postS,int postE,map<int,int>& mapp){
            if(inS>inE || postS>postE){
                return NULL; 
        }
        TreeNode* root=new TreeNode(postorder[postE]);
        int inRoot=mapp[root->val];
        int numLeft=inRoot-inS;

        root->left=buildTree(inorder,inS,inRoot-1,postorder,postS,postS+numLeft-1,mapp);

        root->right=buildTree(inorder,inRoot+1,inE,postorder,postS+numLeft,postE-1,mapp);

        return root;
        
    }
};