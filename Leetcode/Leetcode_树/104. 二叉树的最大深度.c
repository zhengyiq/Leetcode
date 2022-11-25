/**
   给定一个二叉树，找出其最大深度。
   二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。
   说明: 叶子节点是指没有子节点的节点。
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


//int maxDepth(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return 0;
//    }
//
//    if (root->left == NULL && root->right == NULL)
//    {
//        return 1;
//    }
//
//    int leftheight = maxDepth(root->left);
//    int rightheight = maxDepth(root->right);
//
//    return 1 + (leftheight > rightheight ? leftheight : rightheight);
//}