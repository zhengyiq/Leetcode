/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

 /**
 ����һ���������ͷ���pHead(��ͷ�ڵ�����ֵ�ģ���������ͼ������val��1)������Ϊn����ת������󣬷���������ı�ͷ��
  * @param pHead ListNode��
  * @return ListNode��
  */
//struct ListNode* ReverseList(struct ListNode* pHead) {
//    struct ListNode* tail = NULL;
//    struct ListNode* cur = pHead;
//    while (cur != NULL)
//    {
//        struct ListNode* next = cur->next;
//        cur->next = tail;
//        tail = cur;
//        cur = next;
//    }
//    return tail;
//
//}