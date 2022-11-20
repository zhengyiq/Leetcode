/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

 /**
  * ���������޻��ĵ��������ҳ����ǵĵ�һ��������㣬���û�й����ڵ��򷵻ؿա���ע����Ϊ�����������������Դ���������ݵ���ʾ����������ʽ��ʾ�ģ���֤������������ȷ�ģ�
  * @param pHead1 ListNode��
  * @param pHead2 ListNode��
  * @return ListNode��
  */
//struct ListNode* FindFirstCommonNode(struct ListNode* pHead1, struct ListNode* pHead2) {
//    // write code here
//    struct ListNode* h1 = pHead1;
//    struct ListNode* h2 = pHead2;
//    int count1 = 0;
//    int count2 = 0;
//
//    while (h1 != NULL)
//    {
//        count1++;
//        h1 = h1->next;
//    }
//    while (h2 != NULL)
//    {
//        count2++;
//        h2 = h2->next;
//    }
//
//    int num = abs(count1 - count2);
//
//    struct ListNode* fastnode = pHead1;
//    struct ListNode* slownode = pHead2;
//
//    if (count1 < count2)
//    {
//        fastnode = pHead2;
//        slownode = pHead1;
//    }
//
//    while (num--)
//    {
//        fastnode = fastnode->next;
//    }
//
//    while (fastnode != slownode)
//    {
//        fastnode = fastnode->next;
//        slownode = slownode->next;
//    }
//
//    return slownode;
//}