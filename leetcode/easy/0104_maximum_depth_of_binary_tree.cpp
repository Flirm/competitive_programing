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
    int auxD(TreeNode* root, int num){
        if(!root) return num;
        return max(auxD(root->left, num + 1), auxD(root->right, num + 1));
    }

    int maxDepth(TreeNode* root) {
        return auxD(root, 0);
    }
};