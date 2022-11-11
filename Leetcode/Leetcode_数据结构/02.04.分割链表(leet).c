/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


//struct ListNode* partition(struct ListNode* head, int x) {
//    struct ListNode* lessnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* largenode = (struct ListNode*)malloc(sizeof(struct ListNode));
//    lessnode->next = NULL;
//    largenode->next = NULL;
//    struct ListNode* less = lessnode;
//    struct ListNode* large = largenode;
//    struct ListNode* cur = head;
//    while (cur)
//    {
//        if (cur->val < x)
//        {
//            less->next = cur;
//            less = less->next;
//        }
//        else
//        {
//            large->next = cur;
//            large = large->next;
//        }
//        cur = cur->next;
//    }
//    if (lessnode->next == NULL)
//    {
//        large->next = NULL;
//        head = largenode->next;
//    }
//    else
//    {
//        large->next = NULL;
//        head = lessnode->next;
//        less->next = largenode->next;
//    }
//    free(lessnode);
//    free(largenode);
//    return head;
//}