//iterative approach - binary tree
    vector<int> left_Root_right_InorderTraversal(TreeNode* root){
        vector<int> inorder_vector;
        stack<TreeNode*> st;
        TreeNode* curr=root;
        
        while(!st.empty() || curr!=nullptr){
            while(curr!=nullptr){
                st.push(curr);
                curr = curr->left;
            }
            curr = st.top();
            st.pop();
            inorder_vector.push_back(curr->val);
            curr = curr->right;
        }
        return inorder_vector;
    }
