/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

 /**
  使用在BM 4中编写的合并两个有序链表使用for循环重复比较
  * @param lists ListNode类一维数组
  * @param listsLen int lists数组长度
  * @return ListNode类
  */

struct ListNode* Merge(struct ListNode* pHead1, struct ListNode* pHead2) {
    // write code here
    //使用尾插的方式，并且携带哨兵位

    if (pHead1 == NULL)
    {
        return pHead2;
    }
    if (pHead2 == NULL)
    {
        return pHead1;
    }
    struct ListNode* rehead = (struct ListNode*)malloc(sizeof(struct ListNode));
    rehead->next = NULL;

    struct ListNode* cur = rehead;
    struct ListNode* h1 = pHead1;
    struct ListNode* h2 = pHead2;

    while (h1 != NULL && h2 != NULL)
    {
        if (h1->val < h2->val)
        {
            cur->next = h1;
            h1 = h1->next;
            cur = cur->next;
        }
        else
        {
            cur->next = h2;
            h2 = h2->next;
            cur = cur->next;
        }
    }

    if (h1 == NULL)
    {
        cur->next = h2;
    }
    else
    {
        cur->next = h1;
    }
    return rehead->next;
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsLen) {
    // write code here
    struct ListNode* ans = NULL;
    for (size_t i = 0; i < listsLen; ++i) {
        ans = Merge(ans, lists[i]);
    }
    return ans;
}