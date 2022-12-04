/**
   110. Æ½ºâ¶ş²æÊ÷
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

//int TreeHeight(struct TreeNode* root, int* dif)
//{
//    if (root == NULL)
//    {
//        return 0;
//    }
//
//    int leftheight = TreeHeight(root->left, dif);
//    int rightheight = TreeHeight(root->right, dif);
//
//    int tmp = abs(leftheight - rightheight);
//
//    if (tmp > (*dif))
//    {
//        *dif = tmp;
//    }
//
//    return leftheight > rightheight ? 1 + leftheight : 1 + rightheight;
//}
//
//bool isBalanced(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return true;
//    }
//
//    int dif = 1;
//    int height = TreeHeight(root, &dif);
//
//    if (dif > 1)
//    {
//        return false;
//    }
//    else
//    {
//        return true;
//    }
//}