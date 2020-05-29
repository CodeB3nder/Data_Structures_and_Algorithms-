class Solution {
public:
    vector<int> postorder(Node* root) {
        stack <Node*> s1,s2;
        s1.push(root);
        vector<int> res;
        while(!s1.empty())
        {
            Node* curr = s1.top();
            s1.pop();
            s2.push(curr);
            if(curr->left!=NULL)
                s1.push(curr->left);
            if(curr->right!=NULL)
                s1.push(curr->right);
        }
        while(!s2.empty()){
            Node* curr = s2.top();
            res.push_back(curr->val);
            s2.pop();
        }
        return res;
    }
};