class Solution {
public:
 TreeNode* minVal(TreeNode* root) {
       TreeNode* temp=root;
       
       while(temp->left!=NULL){
           temp=temp->left;
       }
       return temp;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return root;
        }
        if(root->val==key){
        //0th child//
        if(root->left==NULL && root->right==NULL){
            delete(root);
            return NULL;
        }
        //1 child//

        // left child
        if(root->left!=NULL && root->right==NULL){
            TreeNode* temp=root->left;
            delete root;
            return temp;
        }
        //right child//
         if(root->left==NULL && root->right!=NULL){
            TreeNode* temp=root->right;
            delete root;
            return temp;
        }
        // 2 childs
        if(root->left!=NULL && root->right!=NULL){
           int min=minVal(root->right)->val;
           root->val=min;
           root->right=deleteNode(root->right,min);
           return root;
        }
        }

        else if(root->val>key){
            root->left=deleteNode(root->left,key);
        }
        else {
             root->right=deleteNode(root->right,key);
        }
        return root;
    }
};