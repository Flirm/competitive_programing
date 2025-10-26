#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool auxPath(TreeNode* root, int target, int curr){
        if(!root) return target==curr?true:false;
        curr += root->val;
        if(!root->left) return auxPath(root->right, target, curr);
        if(!root->right) return auxPath(root->left, target, curr);
        return auxPath(root->left, target, curr) || auxPath(root->right, target, curr);
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        return auxPath(root, targetSum, 0);
    }
};