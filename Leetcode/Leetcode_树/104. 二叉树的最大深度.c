/**
   ����һ�����������ҳ��������ȡ�
   �����������Ϊ���ڵ㵽��ԶҶ�ӽڵ���·���ϵĽڵ�����
   ˵��: Ҷ�ӽڵ���ָû���ӽڵ�Ľڵ㡣
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