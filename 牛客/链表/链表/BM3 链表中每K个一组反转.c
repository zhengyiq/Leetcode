/*
将给出的链表中的节点每 k 个一组翻转，返回翻转后的链表
如果链表中的节点数不是 k 的倍数，将最后剩下的节点保持原样
你不能更改节点中的值，只能更改节点本身。
*/



//#include <stdio.h>
//typedef struct ListNode {
//    int val;
//    struct ListNode* next;
//}ListNode;
//
//
//ListNode* CreatSList(int* arr, int sz)
//{
//    struct ListNode* head = NULL;
//    struct ListNode* tail = NULL;
//    struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//    if (newnode == NULL)
//    {
//        perror("mallic failed");
//        return;
//    }
//    newnode->val = arr[0];
//    head = tail = newnode;
//    for (int i = 1; i < sz; i++)
//    {
//        struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//        if (newnode == NULL)
//        {
//            perror("mallic failed");
//            return;
//        }
//        else
//        {
//            newnode->val = arr[i];
//            tail->next = newnode;
//            tail = tail->next;
//        }
//    }
//    tail->next = NULL;
//    return head;
//}
//
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
//}
//
//struct ListNode* reverseKGroup(struct ListNode* head, int k) {
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    if (k == 1 || head->next == NULL)
//    {
//        return head;
//    }
//
//    struct ListNode* cur = head;
//    int i = 1;
//    int m = k;
//    int tmp = m;
//    while (cur != NULL)
//    {
//        tmp = m;
//        while (tmp - 1)
//        {
//            cur = cur->next;
//            if (cur == NULL)
//            {
//                return head;
//            }
//            tmp--;
//        }
//        head = reverseBetween(head, i, i + k - 1);
//
//        i = i + k;
//        m += k;
//
//        cur = head;
//    }
//    return head;
//}
//
//int main(void)
//{
//
//    int arr[5] = { 1,2,3,4,5 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    ListNode* head = CreatSList(arr, sz);
//    reverseKGroup(head, 2);
//    return 0;
//}


//struct ListNode* reverse(struct ListNode* head, int k) {
//    struct ListNode* cur, * next, * pre;
//    pre = NULL, cur = head, next = head->next;
//    while (k--) {
//        cur->next = pre;
//        pre = cur;
//        cur = next;
//        next = next->next;
//    }
//    return pre;
//}
//
//struct ListNode* reverseKGroup(struct ListNode* head, int k) {
//    // write code here
//
//    struct ListNode* reverseHead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    reverseHead->next = head;//将当前的结点与头节点一致
//    struct ListNode* revHead, * revEnd;
//    int count = 0;
//    revHead = reverseHead, revEnd = reverseHead->next;//head表示翻转区间的前一个节点，end表示翻转区间的一个节点
//
//    if (k == 1) return reverseHead->next;  //如果k = 1,则直接返回
//
//    while (revEnd) {   //寻找区间节点过程中，如果区间后节点不存在，则直接退出
//        revEnd = revEnd->next;//存在则指向下一个
//        if (++count == k) //如果找到一个满足k的区间，则开始反转
//        {
//            revHead->next = reverse(revHead->next, k);//区间前一个结点的next 为 反转后链表
//            while (count--) //找到翻转后的链表的区间的末尾结点
//            {
//                revHead = revHead->next;
//            }
//            revHead->next = revEnd;//此时head为反转好的区间的某位节点，next指向之前保存的反转区间的后一个节点
//            //同时revHead处于下一区间的前一个节点。
//            count = 0;//count置0
//        }
//    }
//    return reverseHead->next;
//}