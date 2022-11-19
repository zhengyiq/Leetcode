///**
// * struct ListNode {
// *	int val;
// *	struct ListNode *next;
// * };
// */
// /**
//  * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//  * 给定一个链表，删除链表的倒数第 n 个节点并返回链表的头指针
//  * 例如，给出的链表为: 1\to 2\to 3\to 4\to 51→2→3→4→5, n= 2n=2.删除了链表的倒数第 nn 个节点之后,链表变为1\to 2\to 3\to 51→2→3→5.
//  * @param head ListNode类
//  * @param n int整型
//  * @return ListNode类
//  */
//struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
//    // write code here
//    struct ListNode* slow = head;
//    struct ListNode* prev = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* fast = head;
//    prev->next = head;
//
//    while (n--)
//    {
//        if (fast == NULL)
//        {
//            return NULL;
//        }
//        fast = fast->next;
//    }
//
//    if (fast == NULL)
//    {
//        prev->next = slow->next;
//        head = prev->next;
//        return head;
//    }
//
//    while (fast != NULL)
//    {
//        prev = prev->next;
//        slow = slow->next;
//        fast = fast->next;
//    }
//    prev->next = slow->next;
//    return head;
//
//}