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
    void auxTrav(TreeNode* root, vector<int> *v){
        if(!root) return;
        auxTrav(root->left, v);
        auxTrav(root->right, v);
        v->push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        auxTrav(root, &v);
        return v;
    }
};