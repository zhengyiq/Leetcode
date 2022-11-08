//struct ListNode* middleNode(struct ListNode* head)
//{
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next;
//    }
//    return slow;
//}
//
//struct ListNode* reverseList(struct ListNode* head)
//{
//    struct ListNode* rehead = NULL;
//    struct ListNode* cur = head;
//
//    while (cur)
//    {
//        struct ListNode* next = cur->next;
//        cur->next = rehead;
//        rehead = cur;
//        cur = next;
//    }
//    return rehead;
//
//}
//
//class PalindromeList {
//public:
//    bool chkPalindrome(ListNode* A) {
//
//        //ʹ�ÿ���ָ���ҵ������е��м�ڵ�
//        struct ListNode* rehead = middleNode(A);
//
//        //���ҵ����м�ڵ���������ת
//        struct ListNode* cmp = reverseList(rehead);
//
//        //��ԭ����תǰ�����ֵ�뷴ת�����ֵ���бȽ�
//        while (A && cmp)
//        {
//            if (A->val != cmp->val)
//                return false;
//            A = A->next;
//            cmp = cmp->next;
//        }
//        return true;
//
//    }
//};
