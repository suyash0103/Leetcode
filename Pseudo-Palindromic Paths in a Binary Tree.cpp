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
    int ans = 0;
    
    void check(vector<int> v)
    {
        int odd = 0, even = 0;
        map<int, int> mp;
        for(int i = 0; i < v.size(); i++)
        {
            mp[v[i]]++;
        }
        
        auto it = mp.begin();
        while(it != mp.end())
        {
            if(it->second % 2 == 1)
            {
                odd++;
            }
            it++;
        }
        
        if(odd > 1 || (odd > 0 && v.size() % 2 == 0))
        {
            
        }
        else
        {
            ans++;
        }
    }
    
    void dfs(TreeNode* root, vector<int>& v)
    {
        if(root == NULL)
        {
            return;
        }
        
        v.push_back(root->val);
        
        if(root->left == NULL && root->right == NULL)
        {
            check(v);
        }
        else 
        {
            dfs(root->left, v);
            dfs(root->right, v);   
        }
        
        v.pop_back();
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> v;
        dfs(root, v);
        
        cout << ans;
        
        return ans;
    }
};