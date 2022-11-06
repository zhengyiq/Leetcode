//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
//    int point = 0;
//    struct ListNode* fast = pListHead;
//    struct ListNode* slow = pListHead;
//
//    //fast先走K步
//    while (k--)
//    {
//        //链表可能没有空步长
//        if (fast == NULL)
//        {
//            return NULL;
//        }
//        else
//        {
//            fast = fast->next;
//        }
//    }
//
//    while (fast)
//    {
//        fast = fast->next;
//        slow = slow->next;
//    }
//    return slow;
//}


// struct ListNode* FindKthToTail(struct ListNode* pListHead, int k ) {
//     int point = 0;
//     struct ListNode* cur = pListHead;
//     struct ListNode* head = pListHead;

//     while (cur)
//     {
//         cur = cur->next;
//         point++;
//     }

//     if (point<k)
//     {
//         return NULL;
//     }
//     else
//     {
//         int pos = point - k + 1;
//         while (pos > 1)
//         {
//             head = head->next;
//             pos--;
//         }
//         return head;
//     }



// }