/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans = NULL;
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(cloned == NULL)
        {
            return NULL;
        }
        
        if(target->val == cloned->val)
        {
            return cloned;
        }
        
        TreeNode* left = getTargetCopy(original, cloned->left, target);
        TreeNode* right = getTargetCopy(original, cloned->right, target);
        
        return left == NULL ? right : left;
    }
};