/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

 /**
  * 给定一个链表，请判断该链表是否为回文结构。
    回文是指该字符串正序逆序完全一致。
    数据范围： 链表节点数 0 <= n <= 10^5
    链表中每个节点的值满足∣val∣≤10^7
  * @param head ListNode类 the head
  * @return bool布尔型
  */
//bool isPail(struct ListNode* head) {
//    // write code here
//    if (head == NULL || head->next == NULL)
//    {
//        return true;
//    }
//
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//
//    while (fast != NULL && fast->next != NULL)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//
//    struct ListNode* tail = NULL;
//    struct ListNode* cur = head;
//
//    while (slow != NULL)
//    {
//        struct ListNode* next = slow->next;
//        slow->next = tail;
//        tail = slow;
//        slow = next;
//    }
//
//    while (tail != NULL)
//    {
//        if (tail->val != cur->val)
//        {
//            return false;
//        }
//        tail = tail->next;
//        cur = cur->next;
//    }
//    return true;
//}