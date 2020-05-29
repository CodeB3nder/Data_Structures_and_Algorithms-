 // Each node has an Children vector that contains all the children
 // in a ordere way
class Solution {
    public:
        vector<int> preorder(Node* root){
            if(root == NULL)
                return {};
           vector<int> res;
            stack<Node*> s;
            s.push(root);
            while(!s.empty()){
                Node* curr = s.top();
                res.push_back(curr->val);
                s.pop();
                for(int i = curr->children.size()-1 ;i>=0; i--)
                    s.push(curr->children[i]);
            }
            return res;
            
        }
};