/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */
 /**
  * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
  * 给定一个二叉树的根节点root，返回它的中序遍历结果。
  *
  * @param root TreeNode类
  * @return int整型一维数组
  * @return int* returnSize 返回数组行数
  */

//void _inorder(struct TreeNode* root, int* i, int* arr)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//
//    _inorder(root->left, i, arr);
//    arr[(*i)++] = root->val;
//    _inorder(root->right, i, arr);
//}
//
//int* inorderTraversal(struct TreeNode* root, int* returnSize) {
//    // write code here
//    int* arr = (int*)malloc(sizeof(int) * 1001);
//    int i = 0;
//    _inorder(root, &i, arr);
//
//    *returnSize = i;
//    return arr;
//}
