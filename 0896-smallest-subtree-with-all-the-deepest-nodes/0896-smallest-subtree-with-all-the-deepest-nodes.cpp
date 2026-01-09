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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        function<int(TreeNode*)> f=[&](TreeNode* node)
        {
            if(node==nullptr)return 0;
            int l=f(node->left);
            int r=f(node->right);
            return max(l,r)+1;
        };
        int l=f(root->left);
        int r=f(root->right);
        if(l==r)return root;
        if(l>r)
            return subtreeWithAllDeepest(root->left);
        else
            return subtreeWithAllDeepest(root->right);

        return root;
    }
};