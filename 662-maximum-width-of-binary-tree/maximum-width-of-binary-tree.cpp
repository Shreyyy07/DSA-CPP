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
 #define ll long long
    int widthOfBinaryTree(TreeNode* root) {
     if(!root)   {
        return 0;
     }

     queue<pair<TreeNode*,int>>q;
     q.push({root,0});

        int ans=INT_MIN;

     while(!q.empty()){
        int size=q.size();

        int min=q.front().second;
        int first,last;

        for(int i=0; i<size; i++){
           
            TreeNode* node=q.front().first;
             int curr_id=q.front().second;
            curr_id-=min;
            q.pop();

            if(i==0){
                first=curr_id;
            }
            if(i==size-1){
                last=curr_id;
            }
            if(node->left){
                q.push({node->left,(ll) curr_id*2+1});
            }
             if(node->right){
                q.push({node->right,(ll) curr_id*2+2});
            }
        }
        ans=max(ans,last-first+1);
     }
     return ans;
    }
};