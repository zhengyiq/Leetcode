/**
   给你二叉树的根节点 root ，返回它节点值的 前序 遍历。
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
//void PreOrder(struct TreeNode* root, int* a, int* i)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//
//    a[(*i)++] = root->val;
//    PreOrder(root->left, a, i);
//    PreOrder(root->right, a, i);
//
//    return;
//}
//
//
//int* preorderTraversal(struct TreeNode* root, int* returnSize) {
//    int size = TreeSize(root);
//    *returnSize = size;
//    int* a = (int*)malloc(sizeof(int) * size);
//    int i = 0;
//    PreOrder(root, a, &i);
//
//    return a;
//}