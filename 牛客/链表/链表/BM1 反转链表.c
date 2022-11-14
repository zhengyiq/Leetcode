/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

 /**
 给定一个单链表的头结点pHead(该头节点是有值的，比如在下图，它的val是1)，长度为n，反转该链表后，返回新链表的表头。
  * @param pHead ListNode类
  * @return ListNode类
  */
//struct ListNode* ReverseList(struct ListNode* pHead) {
//    struct ListNode* tail = NULL;
//    struct ListNode* cur = pHead;
//    while (cur != NULL)
//    {
//        struct ListNode* next = cur->next;
//        cur->next = tail;
//        tail = cur;
//        cur = next;
//    }
//    return tail;
//
//}