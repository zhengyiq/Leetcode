/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
//    struct ListNode* cur1 = headA;
//    struct ListNode* cur2 = headB;
//
//    int countA = 0;
//    int countB = 0;
//
//    while (cur1->next != NULL)
//    {
//        countA++;
//        cur1 = cur1->next;
//    }
//    while (cur2->next != NULL)
//    {
//        countB++;
//        cur2 = cur2->next;
//    }
//
//    //走完两个链表之后如果有相交的结点，地址一定会相同
//    if (cur1 != cur2)
//        return NULL;
//
//    //计算两个链表之间的个数差
//    int ret = abs(countA - countB);
//
//    //使用假设的方法先假设A链表比较小，然后在进行修正
//    struct ListNode* shortList = headA;
//    struct ListNode* longList = headB;
//    if (countA > countB)
//    {
//        shortList = headB;
//        longList = headA;
//    }
//    while (ret--)
//    {
//        longList = longList->next;
//    }
//    while (longList != shortList)
//    {
//        longList = longList->next;
//        shortList = shortList->next;
//    }
//    return shortList;
//}
//struct ListNode* detectCycle(struct ListNode* head) {
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//
//    //分奇偶结点个数来区分链表
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//        if (fast == slow)
//        {
//            struct ListNode* meet = fast;
//            struct ListNode* otherhead = meet->next;
//            meet->next = NULL;
//            return getIntersectionNode(head, otherhead);
//        }
//    }
//    return NULL;
//}



// struct ListNode *detectCycle(struct ListNode *head) {
//     struct ListNode* slow = head;
//     struct ListNode* fast = head;

//     //分奇偶结点个数来区分链表
//     while(fast && fast->next)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//         if (fast == slow)
//         {
//             struct ListNode* meet = fast;
//             while (head != meet)
//             {
//                 head = head->next;
//                 meet = meet->next;
//             }
//             return meet;
//         }
//     }
//     return NULL;
// }