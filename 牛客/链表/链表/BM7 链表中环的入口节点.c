///**
// * struct ListNode {
// *	int val;
// *	struct ListNode *next;
// * };
// */
// /**
//  * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//  * 给一个长度为n链表，若其中包含环，请找出该链表的环的入口结点，否则，返回null。
//  *
//  * @param pHead ListNode类
//  * @return ListNode类
//  */
//struct ListNode* EntryNodeOfLoop(struct ListNode* pHead) {
//    // write code here
//    struct ListNode* slow = pHead;
//    struct ListNode* fast = pHead;
//
//    //分奇偶结点个数来区分链表
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//        if (fast == slow)
//        {
//            struct ListNode* newnode = fast;
//            while (pHead)
//            {
//                if (pHead == newnode)
//                {
//                    return pHead;
//                }
//                pHead = pHead->next;
//                newnode = newnode->next;
//            }
//        }
//    }
//    return NULL;
//}
