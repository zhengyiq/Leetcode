/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

 /**
  * ����һ���������жϸ������Ƿ�Ϊ���Ľṹ��
    ������ָ���ַ�������������ȫһ�¡�
    ���ݷ�Χ�� ����ڵ��� 0 <= n <= 10^5
    ������ÿ���ڵ��ֵ����Oval�O��10^7
  * @param head ListNode�� the head
  * @return bool������
  */
//bool isPail(struct ListNode* head) {
//    // write code here
//    if (head == NULL || head->next == NULL)
//    {
//        return true;
//    }
//
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//
//    while (fast != NULL && fast->next != NULL)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//
//    struct ListNode* tail = NULL;
//    struct ListNode* cur = head;
//
//    while (slow != NULL)
//    {
//        struct ListNode* next = slow->next;
//        slow->next = tail;
//        tail = slow;
//        slow = next;
//    }
//
//    while (tail != NULL)
//    {
//        if (tail->val != cur->val)
//        {
//            return false;
//        }
//        tail = tail->next;
//        cur = cur->next;
//    }
//    return true;
//}