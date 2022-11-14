/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */
 /**
  * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
  
    ��һ���ڵ���Ϊ size ���� m λ�õ� n λ��֮������䷴ת��Ҫ��ʱ�临�Ӷ� O(n)O(n)���ռ临�Ӷ� O(1)O(1)��
    ���磺
    ����������Ϊ 1\to 2 \to 3 \to 4 \to 5 \to NULL1��2��3��4��5��NULL, m=2,n=4m=2,n=4,
    ���� 1\to 4\to 3\to 2\to 5\to NULL1��4��3��2��5��NULL.
  *
  * @param head ListNode��
  * @param m int����
  * @param n int����
  * @return ListNode��
  */
//struct ListNode* reverseBetween(struct ListNode* head, int m, int n) {
//    struct ListNode* cur = head;
//    struct ListNode* prev = (struct ListNode*)malloc(sizeof(struct ListNode));
//    prev->next = head;
//    struct ListNode* end = head;
//    struct ListNode* next = head;
//    struct ListNode* tail = NULL;
//    int flag = m;
//
//    if (m == n)
//    {
//        return cur;
//    }
//
//    while (--m)
//    {
//        prev = prev->next;
//        prev = cur;
//        cur = cur->next;
//    }
//
//    while (--n)
//    {
//        end = end->next;
//        next = end->next;
//        tail = next;
//    }
//
//    while (cur != tail)
//    {
//        struct ListNode* tmp = cur->next;
//        cur->next = next;
//        next = cur;
//        cur = tmp;
//    }
//
//
//    if (flag == 1)
//    {
//        prev->next = next;
//        return prev->next;
//    }
//    else
//    {
//        prev->next = next;
//        return head;
//    }
//
//
//}