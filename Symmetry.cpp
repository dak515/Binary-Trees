class Solution {
public:

    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)return true;
        return isSymmetric2(root->left,root->right);
    }
            bool isSymmetric2(TreeNode* t1, TreeNode* t2) {
        if(t1==nullptr && t2==nullptr)return true;
        else if(t1 == nullptr||t2==nullptr)return false;
        else{
            return(t1->val == t2->val && isSymmetric2(t1->left, t2->right) && isSymmetric2(t1->right, t2->left));
        }
    }

};
