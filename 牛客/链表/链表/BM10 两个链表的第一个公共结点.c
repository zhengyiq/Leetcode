/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

 /**
  * 输入两个无环的单向链表，找出它们的第一个公共结点，如果没有公共节点则返回空。（注意因为传入数据是链表，所以错误测试数据的提示是用其他方式显示的，保证传入数据是正确的）
  * @param pHead1 ListNode类
  * @param pHead2 ListNode类
  * @return ListNode类
  */
//struct ListNode* FindFirstCommonNode(struct ListNode* pHead1, struct ListNode* pHead2) {
//    // write code here
//    struct ListNode* h1 = pHead1;
//    struct ListNode* h2 = pHead2;
//    int count1 = 0;
//    int count2 = 0;
//
//    while (h1 != NULL)
//    {
//        count1++;
//        h1 = h1->next;
//    }
//    while (h2 != NULL)
//    {
//        count2++;
//        h2 = h2->next;
//    }
//
//    int num = abs(count1 - count2);
//
//    struct ListNode* fastnode = pHead1;
//    struct ListNode* slownode = pHead2;
//
//    if (count1 < count2)
//    {
//        fastnode = pHead2;
//        slownode = pHead1;
//    }
//
//    while (num--)
//    {
//        fastnode = fastnode->next;
//    }
//
//    while (fastnode != slownode)
//    {
//        fastnode = fastnode->next;
//        slownode = slownode->next;
//    }
//
//    return slownode;
//}