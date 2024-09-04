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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);

        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }

        while(!q.empty()){
            int size=q.size();
            vector<int>levelOrder;

            for(int i=0; i<size; i++){
                 TreeNode* root=q.front();
                 q.pop();

                 levelOrder.push_back(root->val);

                if(root->left){
                 q.push(root->left);
                }

                if(root->right){
                q.push(root->right);
                }
            }
                    ans.push_back(levelOrder);
        }
        return ans;

    }
};