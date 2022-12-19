/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */
 /**
  * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
  * 给你二叉树的根节点 root ，返回它节点值的 前序 遍历。
  *
  * @param root TreeNode类
  * @return int整型一维数组
  * @return int* returnSize 返回数组行数
  */
  /**
   * struct TreeNode {
   *	int val;
   *	struct TreeNode *left;
   *	struct TreeNode *right;
   * };
   */
   /**
    * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
    * 给你二叉树的根节点 root ，返回它节点值的 前序 遍历。
    *
    * @param root TreeNode类
    * @return int整型一维数组
    * @return int* returnSize 返回数组行数
    */

//void _prevorder(struct TreeNode* root, int* i, int* arr)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//
//    arr[(*i)++] = root->val;
//    _prevorder(root->left, i, arr);
//    _prevorder(root->right, i, arr);
//
//
//}
//
//int* preorderTraversal(struct TreeNode* root, int* returnSize) {
//    // write code here
//    int* arr = (int*)malloc(sizeof(int) * 100);
//    int i = 0;
//    _prevorder(root, &i, arr);
//
//    *returnSize = i;
//    return arr;
//}