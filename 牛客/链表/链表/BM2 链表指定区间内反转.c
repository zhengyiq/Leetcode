/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */
 /**
  * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
  
    将一个节点数为 size 链表 m 位置到 n 位置之间的区间反转，要求时间复杂度 O(n)O(n)，空间复杂度 O(1)O(1)。
    例如：
    给出的链表为 1\to 2 \to 3 \to 4 \to 5 \to NULL1→2→3→4→5→NULL, m=2,n=4m=2,n=4,
    返回 1\to 4\to 3\to 2\to 5\to NULL1→4→3→2→5→NULL.
  *
  * @param head ListNode类
  * @param m int整型
  * @param n int整型
  * @return ListNode类
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