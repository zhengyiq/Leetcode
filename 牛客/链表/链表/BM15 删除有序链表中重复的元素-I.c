/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */
 /**
  * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
  * ɾ�����������е��ظ�Ԫ�أ�������Ԫ�ش�С�������򣩣�ʹ�����е�����Ԫ�ض�ֻ����һ��
    ���磺
    ����������Ϊ1\to1\to21��1��2,���� 1��2.
    ����������Ϊ 1��1��2��3��3,���� 1��2��3.

    ���ݷ�Χ������������ 0 \le n \le 1000��n��100������������ڵ��ֵ����Oval�O��100
    ���ף��ռ临�Ӷ� O(1)��ʱ�临�Ӷ� O(n)
  *
  * @param head ListNode��
  * @return ListNode��
  */
//struct ListNode* deleteDuplicates(struct ListNode* head) {
//    // write code here
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    struct ListNode* cur = head;
//    while (cur->next != NULL)
//    {
//        struct ListNode* _next = cur->next;
//        // if (_next == NULL)
//        // {
//        //     break;
//        // }
//        if (cur->val == _next->val)
//        {
//            cur->next = _next->next;
//        }
//        else
//            cur = cur->next;
//    }
//    return head;
//}