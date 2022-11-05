//不带哨兵位的尾插
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//    struct ListNode* head1 = list1;
//    struct ListNode* head2 = list2;
//    struct ListNode* newnode = NULL;
//    struct ListNode* tail = newnode;
//
//    if (head1 == NULL)
//        return head2;
//    if (head2 == NULL)
//        return head1;
//    while (head1 && head2)
//    {
//        if (head1->val < head2->val)
//        {
//            if (tail == NULL)
//            {
//                newnode = tail = head1;
//                head1 = head1->next;
//            }
//            else
//            {
//                struct ListNode* tmp = head1->next;
//                tail->next = head1;
//                tail = tail->next;
//                head1 = tmp;
//            }
//        }
//        else
//        {
//            if (tail == NULL)
//            {
//                newnode = tail = head2;
//                head2 = head2->next;
//            }
//            else
//            {
//                struct ListNode* tmp = head2->next;
//                tail->next = head2;
//                tail = tail->next;
//                head2 = tmp;
//            }
//        }
//    }
//    if (head1 == NULL)
//        tail->next = head2;
//    else
//        tail->next = head1;
//
//    return newnode;
//}



//带哨兵位的尾插
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//    struct ListNode* head1 = list1;
//    struct ListNode* head2 = list2;
//    struct ListNode* guard = (struct ListNode*)malloc(sizeof(struct ListNode));
//    guard->next = NULL;
//    struct ListNode* cur = guard;
//    if (list1 == NULL)
//    {
//        return list2;
//    }
//    if (list2 == NULL)
//    {
//        return list1;
//    }
//    while ((head1) && (head2))
//    {
//        if (head1->val <= head2->val)
//        {
//            struct ListNode* tmp = head1->next;
//            cur->next = head1;
//            cur = cur->next;
//            head1 = tmp;
//        }
//        else
//        {
//            struct ListNode* tmp = head2->next;
//            cur->next = head2;
//            cur = cur->next;
//            head2 = tmp;
//        }
//    }
//    if (head1 == NULL)
//        cur->next = head2;
//    else
//        cur->next = head1;
//    cur = guard->next;
//    free(guard);
//    return cur;
//}