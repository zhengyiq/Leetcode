//#include <stdio.h>
//#include <stdlib.h>
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
/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

 /**
  * 假设链表中每一个节点的值都在 0 - 9 之间，那么链表整体就可以代表一个整数。
	给定两个这种链表，请生成代表两个整数相加值的结果链表。
	数据范围：0 \le n,m \le 10000000≤n,m≤1000000，链表任意值 0 \le val \le 90≤val≤9
	要求：空间复杂度 O(n)O(n)，时间复杂度 O(n)O(n)
  * @param head1 ListNode类
  * @param head2 ListNode类
  * @return ListNode类
  */
//struct ListNode* addInList(struct ListNode* head1, struct ListNode* head2) {
//    // write code here
//    struct ListNode* tail1 = NULL;
//    struct ListNode* tail2 = NULL;
//
//    struct ListNode* cur1 = head1;
//    struct ListNode* cur2 = head2;
//
//    int count1 = 0;
//    int count2 = 0;
//
//    while (cur1 != NULL)
//    {
//        struct ListNode* next = cur1->next;
//        cur1->next = tail1;
//        tail1 = cur1;
//        cur1 = next;
//        count1++;
//    }
//
//    while (cur2 != NULL)
//    {
//        struct ListNode* next = cur2->next;
//        cur2->next = tail2;
//        tail2 = cur2;
//        cur2 = next;
//        count2++;
//    }
//
//
//    struct ListNode* longlist = tail1;
//    struct ListNode* shortlist = tail2;
//    int flag = 0;
//    if (count1 < count2)
//    {
//        shortlist = tail1;
//        longlist = tail2;
//        flag = 1;
//    }
//    struct ListNode* prev = longlist;
//    int tmp = 0;
//
//    while (longlist != NULL && shortlist != NULL)
//    {
//        if ((longlist->val + shortlist->val + tmp) >= 10)
//        {
//            prev = longlist;
//            longlist->val = (longlist->val + shortlist->val + tmp) % 10;
//            longlist = longlist->next;
//            shortlist = shortlist->next;
//            tmp = 1;
//        }
//        else
//        {
//            prev = longlist;
//            longlist->val = (longlist->val + shortlist->val + tmp) % 10;
//            longlist = longlist->next;
//            shortlist = shortlist->next;
//            tmp = 0;
//        }
//    }
//    while (longlist != NULL)
//    {
//        if ((longlist->val + tmp) >= 10)
//        {
//            prev = longlist;
//            longlist->val = (longlist->val + tmp) % 10;
//            longlist = longlist->next;
//            tmp = 1;
//        }
//        else
//        {
//            longlist->val = (longlist->val + tmp) % 10;
//            longlist = longlist->next;
//            tmp = 0;
//        }
//    }
//
//    if (tmp == 1 && longlist == NULL)
//    {
//        struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//        newnode->val = tmp;
//        newnode->next = NULL;
//        prev->next = newnode;
//    }
//
//    struct ListNode* tail = NULL;
//    if (flag == 0)
//    {
//        while (tail1 != NULL)
//        {
//            struct ListNode* next = tail1->next;
//            tail1->next = tail;
//            tail = tail1;
//            tail1 = next;
//        }
//    }
//    else if (flag == 1)
//    {
//        while (tail2 != NULL)
//        {
//            struct ListNode* next = tail2->next;
//            tail2->next = tail;
//            tail = tail2;
//            tail2 = next;
//        }
//    }
//    return tail;
//
//}
//
//int main(void)
//{
//
//    int arr1[] = { 4,6,0,2,6,6,3,6,3,0,7,8,0,4,1,7,0,5,6,5,2,4,9,9,1,5,1,5 };
//    int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//    int arr2[] = { 6,2,7,8,6,4,7,0,9,3,0,3,6,2,5,6,0,9,6,2,7,4,2,7,1,0,9,0,5,6,5,4,9,1,8,9,3,4,0,2,1,8,8,2,2,0 };
//    int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//    ListNode* head1 = CreatSList(arr1, sz1);
//    ListNode* head2 = CreatSList(arr2, sz2);
//    ListNode* ret = addInList(head1,head2);
//    return 0;
//}