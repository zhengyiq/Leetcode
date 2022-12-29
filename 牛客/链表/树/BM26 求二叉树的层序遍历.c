/**
 * struct TreeNode {
 *  int val;
 *  struct TreeNode *left;
 *  struct TreeNode *right;
 * };
 */
 /**
  * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
  * ����һ�������������ظö�������������Ľ�����������ң�һ��һ��ر�����
  *
  * @param root TreeNode��
  * @return int���Ͷ�ά����
  * @return int* returnSize ������������
  * @return int** returnColumnSizes ������������
  */
//int** levelOrder(struct TreeNode* root, int* returnSize,
//    int** returnColumnSizes) {
//    *returnSize = 0;   //�������������
//    if (root == NULL)
//        return NULL;
//    struct TreeNode* queue[100001];  //�½�����
//    int** res = (int**)malloc(sizeof(int*) * 100001);  //Ϊres�����ڴ棬resʵ������һ�����飬�����ڴ��������ָ��int������ĵ�ַ��������һ����ά����
//    *returnColumnSizes = (int*)malloc(sizeof(int) * 100001);  //Ϊ�洢�����������������ռ䣬������ÿ����ٸ�Ԫ��
//
//    int head = 0, rear = 0;  //����е�ͷβָ��
//    queue[rear] = root;   //�������ӣ�βָ�����һλ
//    rear++;
//
//    while (head != rear) {    //���зǿ�ʱ
//        int preRear = rear;  //��¼��ǰ���β���
//        int k = 0;           //��ǰ��Ľ������
//        res[*returnSize] = (int*)malloc(sizeof(int) * (preRear - head)); //Ϊ��ά����res�ĵ�*returnSize�з���ռ�
//        while (head < preRear) {  //������ǰ����
//            struct TreeNode* p = queue[head];   //��ͷԪ�س���
//            res[*returnSize][k++] = p->val; //���·��������е�ֵ
//            if (p->left != NULL)   //����ǰ����Ԫ�ص����ӽ�����
//                queue[rear++] = p->left;
//            if (p->right != NULL)  //����ǰ����Ԫ�ص��Һ��ӽ�����
//                queue[rear++] = p->right;
//            head++;  //��ͷָ�����һλ
//        }
//        (*returnColumnSizes)[*returnSize] = k;  //���·������鱾�������
//        (*returnSize)++;  //ָ��ָ����һ�㷵������
//    }
//
//
//    return res;
//}