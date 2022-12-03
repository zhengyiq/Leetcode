/**
   给定一个二叉树的根节点 root ，返回 它的 中序 遍历 。
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
//void InOrder(struct TreeNode* root, int* a, int* i)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//
//    InOrder(root->left, a, i);
//    a[(*i)++] = root->val;
//    InOrder(root->right, a, i);
//
//    return;
//}
//
//int* inorderTraversal(struct TreeNode* root, int* returnSize) {
//    int size = TreeSize(root);
//    *returnSize = size;
//    int* a = (int*)malloc(sizeof(int) * size);
//    int i = 0;
//    InOrder(root, a, &i);
//
//    return a;
//}