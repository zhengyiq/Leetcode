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
//    //������������֮��������ཻ�Ľ�㣬��ַһ������ͬ
//    if (cur1 != cur2)
//        return NULL;
//
//    //������������֮��ĸ�����
//    int ret = abs(countA - countB);
//
//    //ʹ�ü���ķ����ȼ���A����Ƚ�С��Ȼ���ڽ�������
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
//    //����ż����������������
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

//     //����ż����������������
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