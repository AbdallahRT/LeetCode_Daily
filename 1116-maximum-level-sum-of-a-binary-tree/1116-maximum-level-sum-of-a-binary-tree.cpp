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
    int maxLevelSum(TreeNode* root) {
        int ma=INT_MIN;
        int maL=0;
        queue<pair<int,TreeNode*>>q;
        q.push({1,root});
        int level=1;
        int cur=0;
        while(q.size())
        {
            auto [lvl,node]=q.front();q.pop();
            if(lvl==level)cur+=node->val;
            else{
                if(cur>ma){
                    ma=cur;
                    maL=level;
                }
                cur=node->val;
                level=lvl;
            }
            if(node->left !=nullptr)
                q.emplace(lvl+1,node->left);
            if(node->right !=nullptr)
                q.emplace(lvl+1,node->right);
        }
        if(cur>ma){
            ma=cur;
            maL=level;
        }
        return maL;
    }
};