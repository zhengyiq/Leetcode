/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */
 /**
  * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
  * 给定一个二叉树，返回他的后序遍历的序列。后序遍历是值按照 左节点->右节点->根节点 的顺序的遍历。
  *
  * @param root TreeNode类
  * @return int整型一维数组
  * @return int* returnSize 返回数组行数
  */

//void _postorder(struct TreeNode* root, int* i, int* arr)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//
//    _postorder(root->left, i, arr);
//    _postorder(root->right, i, arr);
//    arr[(*i)++] = root->val;
//}
//
//int* postorderTraversal(struct TreeNode* root, int* returnSize) {
//    // write code here
//    int* arr = (int*)malloc(sizeof(int) * 100);
//    int i = 0;
//    _postorder(root, &i, arr);
//
//    *returnSize = i;
//    return arr;
//}
