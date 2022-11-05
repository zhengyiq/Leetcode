//struct ListNode* reverseList(struct ListNode* head) {
//    struct ListNode* cur = NULL;
//    struct ListNode* prev = head;
//
//    while (prev)
//    {
//        struct ListNode* tmp = prev->next;
//        prev->next = cur;
//        cur = prev;
//        prev = tmp;
//    }
//    return cur;
//}