///**
// * struct ListNode {
// *	int val;
// *	struct ListNode *next;
// * };
// */
// /**
//  * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//  * ����һ������ɾ������ĵ����� n ���ڵ㲢���������ͷָ��
//  * ���磬����������Ϊ: 1\to 2\to 3\to 4\to 51��2��3��4��5, n= 2n=2.ɾ��������ĵ����� nn ���ڵ�֮��,�����Ϊ1\to 2\to 3\to 51��2��3��5.
//  * @param head ListNode��
//  * @param n int����
//  * @return ListNode��
//  */
//struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
//    // write code here
//    struct ListNode* slow = head;
//    struct ListNode* prev = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* fast = head;
//    prev->next = head;
//
//    while (n--)
//    {
//        if (fast == NULL)
//        {
//            return NULL;
//        }
//        fast = fast->next;
//    }
//
//    if (fast == NULL)
//    {
//        prev->next = slow->next;
//        head = prev->next;
//        return head;
//    }
//
//    while (fast != NULL)
//    {
//        prev = prev->next;
//        slow = slow->next;
//        fast = fast->next;
//    }
//    prev->next = slow->next;
//    return head;
//
//}