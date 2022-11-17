/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

 /**
  ʹ����BM 4�б�д�ĺϲ�������������ʹ��forѭ���ظ��Ƚ�
  * @param lists ListNode��һά����
  * @param listsLen int lists���鳤��
  * @return ListNode��
  */

struct ListNode* Merge(struct ListNode* pHead1, struct ListNode* pHead2) {
    // write code here
    //ʹ��β��ķ�ʽ������Я���ڱ�λ

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