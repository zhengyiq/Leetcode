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
//        //使用快慢指针找到链表中的中间节点
//        struct ListNode* rehead = middleNode(A);
//
//        //将找到的中间节点后面的链表反转
//        struct ListNode* cmp = reverseList(rehead);
//
//        //将原链表反转前面的数值与反转后的数值进行比较
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
