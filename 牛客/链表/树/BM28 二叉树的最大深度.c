/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */
 /**
  * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
  * ������������������ȣ�
 �����ָ���ĸ��ڵ㵽��һҶ�ӽڵ�·���Ͻڵ��������
 ������������Ҷ�ӽڵ����ȵ����ֵ��
 ��ע��Ҷ�ӽڵ���ָû���ӽڵ�Ľڵ㡣��
  *
  * @param root TreeNode��
  * @return int����
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