/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */
 /**
  * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
  * 求给定二叉树的最大深度，
 深度是指树的根节点到任一叶子节点路径上节点的数量。
 最大深度是所有叶子节点的深度的最大值。
 （注：叶子节点是指没有子节点的节点。）
  *
  * @param root TreeNode类
  * @return int整型
  */
//int maxDepth(struct TreeNode* root) {
//    // write code here
//    if (root == NULL)
//    {
//        return 0;
//    }
//
//    int leftHeight = maxDepth(root->left);
//    int rightHeight = maxDepth(root->right);
//
//    return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
//}