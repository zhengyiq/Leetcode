/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */
 /**
  * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
  * ����һ�����������������ĺ�����������С����������ֵ���� ��ڵ�->�ҽڵ�->���ڵ� ��˳��ı�����
  *
  * @param root TreeNode��
  * @return int����һά����
  * @return int* returnSize ������������
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
