/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */
 /**
  * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
  * ����������ĸ��ڵ� root ���������ڵ�ֵ�� ǰ�� ������
  *
  * @param root TreeNode��
  * @return int����һά����
  * @return int* returnSize ������������
  */
  /**
   * struct TreeNode {
   *	int val;
   *	struct TreeNode *left;
   *	struct TreeNode *right;
   * };
   */
   /**
    * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
    * ����������ĸ��ڵ� root ���������ڵ�ֵ�� ǰ�� ������
    *
    * @param root TreeNode��
    * @return int����һά����
    * @return int* returnSize ������������
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