///**
// * struct ListNode {
// *	int val;
// *	struct ListNode *next;
// * };
// */
// /**
//  * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//  * 输入一个长度为 n 的链表，设链表中的元素的值为 ai ，返回该链表中倒数第k个节点。如果该链表长度小于k，请返回一个长度为 0 的链表。
//  *
//  * @param pHead ListNode类
//  * @param k int整型
//  * @return ListNode类
//  */
//struct ListNode* FindKthToTail(struct ListNode* pHead, int k) {
//    // write code here
//    struct ListNode* slow = pHead;
//    struct ListNode* fast = pHead;
//
//    while (k--)
//    {
//        if (fast == NULL)
//        {
//            return NULL;
//        }
//        fast = fast->next;
//    }
//
//    while (fast != NULL)
//    {
//        slow = slow->next;
//        fast = fast->next;
//    }
//    return slow;
//}