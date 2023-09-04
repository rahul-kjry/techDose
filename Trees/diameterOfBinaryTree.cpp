class Solution {
public:
    
    int help(TreeNode * root , int & dia) {
        if(! root) {
            return 0;
        }
        int lftdia = help(root -> left, dia);
        int rgtdia = help(root -> right, dia);
        dia = max(dia, lftdia + rgtdia);
        return max(lftdia, rgtdia) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int dia = 0;
        help(root, dia);
        return dia;
    }
};