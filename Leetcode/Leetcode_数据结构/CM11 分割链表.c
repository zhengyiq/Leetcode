///*
//struct ListNode {
//    int val;
//    struct ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};*/
//class Partition {
//public:
//    ListNode* partition(ListNode* pHead, int x) {
//        struct ListNode* head1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//        head1->next = NULL;
//        struct ListNode* head2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//        head2->next = NULL;
//
//        struct ListNode* cur = pHead;
//        struct ListNode* tail1 = head1;
//        struct ListNode* tail2 = head2;
//
//        while (cur)
//        {
//            if (cur->val < x)
//            {
//                tail1->next = cur;
//                tail1 = tail1->next;
//            }
//            else
//            {
//                tail2->next = cur;
//                tail2 = tail2->next;
//            }
//            cur = cur->next;
//        }
//        tail1->next = head2->next;
//        tail2->next = NULL;
//        pHead = head1->next;
//        free(head1);
//        free(head2);
//        return pHead;
//
//    }
//};