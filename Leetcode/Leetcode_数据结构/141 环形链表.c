///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     struct ListNode *next;
// * };
// */
//bool hasCycle(struct ListNode* head) {
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//
//    //分奇偶结点个数来区分链表
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//        if (fast == slow)
//            return true;
//    }
//    return false;
//}