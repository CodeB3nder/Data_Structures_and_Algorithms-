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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaves_1;
        vector<int> leaves_2;
        
        leaf_inflater(root1, leaves_1); 
        leaf_inflater(root2, leaves_2);
        
        return leaves_1 == leaves_2;
    }
    
    void leaf_inflater(TreeNode* node, vector<int> &leaves){
        if(node == NULL) return;
        
        if(node->left == NULL && node->right == NULL)
            leaves.push_back(node->val);
        
        leaf_inflater(node->left, leaves);
        leaf_inflater(node->right, leaves);
    }
};