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
void dfs(TreeNode*root,vector<vector<int>>&allpath,vector<int>&path,int targetSum){
if(root==NULL)return ;

  path.push_back(root->val);

 if (root->left == NULL && root->right == NULL && targetSum == root->val) {
            allpath.push_back(path);
        }
        else{

            dfs(root->left,allpath,path,targetSum-root->val);
             dfs(root->right,allpath,path,targetSum-root->val);
        }
        
        path.pop_back();

}

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>allpath;
        vector<int>path;

        dfs(root,allpath,path,targetSum);
        return allpath;

    }  

};