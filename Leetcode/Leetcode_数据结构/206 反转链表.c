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


//将链表指针翻转
//struct ListNode* reverseList(struct ListNode* head) {
//    struct ListNode* n1 = NULL;
//    struct ListNode* n2 = head;
//    if (head == NULL)
//        return NULL;
//    struct ListNode* n3 = n2->next;
//    while (n2)
//    {
//        n2->next = n1;
//        n1 = n2;
//        n2 = n3;
//        if (n3)
//            n3 = n3->next;
//    }
//    return n1;
//}