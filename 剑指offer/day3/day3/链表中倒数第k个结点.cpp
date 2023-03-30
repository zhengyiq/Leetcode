//描述
//输入一个链表，输出该链表中倒数第k个结点。

/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

 /**
  *
  * @param pListHead ListNode类
  * @param k int整型
  * @return ListNode类
  */

//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
//    int point = 0;
//    struct ListNode* fast = pListHead;
//    struct ListNode* slow = pListHead;
//
//    //fast先走K步
//    while (k--)
//    {
//        //链表可能没有空步长
//        if (fast == NULL)
//        {
//            return NULL;
//        }
//        else
//        {
//            fast = fast->next;
//        }
//    }
//
//    while (fast)
//    {
//        fast = fast->next;
//        slow = slow->next;
//    }
//    return slow;
//}

//struct ListNode* ReverseList(struct ListNode* pHead) {
//    if (pHead == NULL)
//    {
//        return NULL;
//    }
//
//    struct ListNode* _pre = pHead;
//    struct ListNode* _cur = pHead;
//    struct ListNode* _next = pHead;
//
//    if (_pre->next == NULL)
//    {
//        return _pre;
//    }
//    else
//    {
//        _cur = _pre->next;
//        _next = _cur;
//    }
//
//    if (_cur->next == NULL)
//    {
//        _cur->next = _pre;
//        _pre->next = NULL;
//        return _cur;
//    }
//    else
//    {
//        _next = _cur->next;
//        _pre->next = NULL;
//        while (_next != NULL)
//        {
//            _cur->next = _pre;
//            _pre = _cur;
//            _cur = _next;
//            _next = _next->next;
//        }
//        _cur->next = _pre;
//    }
//    return _cur;
//}