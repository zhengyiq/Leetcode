/**
   给你一棵二叉树的根节点 root ，返回其节点值的 后序遍历 。
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */

//int TreeSize(struct TreeNode* root)
//{
//    return !root ? 0 : 1 + TreeSize(root->left) + TreeSize(root->right);
//}
//
//void PostOrder(struct TreeNode* root, int* a, int* i)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//
//    PostOrder(root->left, a, i);
//    PostOrder(root->right, a, i);
//    a[(*i)++] = root->val;
//
//    return;
//}
//
//int* postorderTraversal(struct TreeNode* root, int* returnSize) {
//    int size = TreeSize(root);
//    *returnSize = size;
//    int* a = (int*)malloc(sizeof(int) * size);
//    int i = 0;
//    PostOrder(root, a, &i);
//
//    return a;
//}