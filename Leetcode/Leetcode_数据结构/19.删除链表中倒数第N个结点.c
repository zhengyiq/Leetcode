//https://leetcode.cn/problems/remove-nth-node-from-end-of-list/
//struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//    struct ListNode* prev = head;
//
//    // if (head->next == NULL)
//    //     return NULL;
//    while (n--)
//    {
//        fast = fast->next;
//    }
//    while (fast)
//    {
//        prev = slow;
//        slow = slow->next;
//        fast = fast->next;
//    }
//    if (head == slow)
//    {
//        head = slow->next;
//        return head;
//    }
//
//    prev->next = slow->next;
//    return head;
//}