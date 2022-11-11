///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     struct ListNode *next;
// * };
// */
//void deleteNode(struct ListNode* node) {
//    struct ListNode* slow = node;
//    struct ListNode* prev = slow;
//    struct ListNode* fast = node->next;
//    while (fast)
//    {
//        prev = slow;
//        slow->val = fast->val;
//        slow = slow->next;
//        fast = fast->next;
//    }
//    prev->next = NULL;
//}