/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */
 /**
  * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
  * 删除给出链表中的重复元素（链表中元素从小到大有序），使链表中的所有元素都只出现一次
    例如：
    给出的链表为1\to1\to21→1→2,返回 1→2.
    给出的链表为 1→1→2→3→3,返回 1→2→3.

    数据范围：链表长度满足 0 \le n \le 1000≤n≤100，链表中任意节点的值满足∣val∣≤100
    进阶：空间复杂度 O(1)，时间复杂度 O(n)
  *
  * @param head ListNode类
  * @return ListNode类
  */
//struct ListNode* deleteDuplicates(struct ListNode* head) {
//    // write code here
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    struct ListNode* cur = head;
//    while (cur->next != NULL)
//    {
//        struct ListNode* _next = cur->next;
//        // if (_next == NULL)
//        // {
//        //     break;
//        // }
//        if (cur->val == _next->val)
//        {
//            cur->next = _next->next;
//        }
//        else
//            cur = cur->next;
//    }
//    return head;
//}