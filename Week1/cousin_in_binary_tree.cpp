/*

Problem Statement!!!

n a binary tree, the root node is at depth 0, and children of each depth k node are at depth k+1.

Two nodes of a binary tree are cousins if they have the same depth, but have different parents.

We are given the root of a binary tree with unique values, and the values x and y of two different nodes in the tree.

Return true if and only if the nodes corresponding to the values x and y are cousins.
 

Example 1:

Input: root = [1,2,3,4], x = 4, y = 3
Output: false


Example 2:


Input: root = [1,2,3,null,4,null,5], x = 5, y = 4
Output: true

*/


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
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL)
            return false;
        queue<pair<TreeNode*,int>>qq;
        qq.emplace(root,0);
        int p=-1;
        while(!qq.empty())
        {
            int l=qq.size();
            for(int i=0;i<l;++i)
            {
                TreeNode* node=qq.front().first;
                int value=qq.front().second;

                if(node->val==x||node->val==y)
                {
                    if(p!=-1)
                    {
                        if(p==value)
                            return false;
                        else 
                            return true;

                    }
                    p=value;
                }
                qq.pop();
                if(node->left)
                    qq.emplace(node->left,node->val);
                if(node->right)
                    qq.emplace(node->right,node->val);
                
            }
            if(p!=-1)
                return false;
        }
        return false;
    }
};