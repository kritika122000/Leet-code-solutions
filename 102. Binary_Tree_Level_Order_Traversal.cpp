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
               vector<vector<int>> res;
        helper(root,res,0);
        return res;
}
void helper(TreeNode* root,vector<vector<int>> &res, int level )
{
    if(root==NULL)
        return;
    if(res.size()==level)
    {
        res.push_back(vector<int>());
    }
    res[level].push_back(root->val);
    helper(root->left,res,level+1);
    helper(root->right,res,level+1);
    return;
}
 
};
