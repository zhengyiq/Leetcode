//#include <stdio.h>
//#include <stdlib.h>
//typedef struct ListNode {
//	int val;
//	struct ListNode* next;
//}ListNode;
//
//
//ListNode* CreatSList(int* arr, int sz)
//{
//	struct ListNode* head = NULL;
//	struct ListNode* tail = NULL;
//	struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//	if (newnode == NULL)
//	{
//		perror("mallic failed");
//		return;
//	}
//	newnode->val = arr[0];
//	head = tail = newnode;
//	for (int i = 1; i < sz; i++)
//	{
//		struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//		if (newnode == NULL)
//		{
//			perror("mallic failed");
//			return;
//		}
//		else
//		{
//			newnode->val = arr[i];
//			tail->next = newnode;
//			tail = tail->next;
//		}
//	}
//	tail->next = NULL;
//	return head;
//}
//
//struct ListNode* deleteDuplicates(struct ListNode* head) {
//    // write code here
//    if (head == NULL || head->next == NULL)
//    {
//        return head;
//    }
//
//    struct ListNode* tail = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* tail1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    tail->val = 1001;
//    tail->next = NULL;
//    tail1->next = tail;
//    struct ListNode* prev = tail1;
//    struct ListNode* prev_p = tail1;
//    struct ListNode* tail_h = tail;
//    struct ListNode* cur = head;
//
//    // tail_h->next = cur;
//    // tail_h = tail->next;
//    int tmp = cur->val;
//    // cur = cur->next;
//
//    while (cur != NULL)
//    {
//        if (tail_h->next == NULL)
//        {
//            tail_h->next = cur;
//            tail_h = tail_h->next;
//            cur = cur->next;
//            prev = prev->next;
//        }
//        else
//        {
//            if (cur->val == tail_h->val)
//            {
//                if (prev != prev_p)
//                {
//                    tail_h = prev;
//                    prev = prev_p;
//                }
//            }
//
//            else if (cur != NULL && (cur->val != tmp))
//            {
//                prev_p = prev;
//                tmp = cur->val;
//                tail_h->next = cur;
//                tail_h = tail_h->next;
//                prev = prev->next;
//            }
//            cur = cur->next;
//
//        }
//    }
//
//    tail_h->next = NULL;
//
//    return tail->next;
//}
//
//int main(void)
//{
//
//    //int arr[] = { -50,-49,-49,-49,-48,-48,-47,-47,-46,-46,-46,-44,-42,-40,-40,-40,-39,-39,-38,-37,-36,-36,-35,-34,-33,-33,-32,-31,-31,-29,-22,-22,-21,-19,-16,-15,-15,-14,-14,-12,-11,-11,-9,-7,-7,-7,-6,-6,-3,-1,-1,0,0,1,1,3,3,3,3,4,4,5,6,6,7,8,8,9,9,9,10,12,12,13,15,18,18,19,19,20,21,22,25,29,31,31,32,34,34,35,35,35,36,37,39,39,39,41,41,41,42,43,44,44,45,45,46,46,48,49,49,50 };
//    int arr[] = { 1,1,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	ListNode* head = CreatSList(arr, sz);
//	deleteDuplicates(head);
//	return 0;
//}

/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */
 /**
  * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
  * ����һ���������������ɾ�������е������ظ����ֵ�Ԫ�أ�ֻ����ԭ������ֻ����һ�ε�Ԫ�ء�
    ���磺
    ����������Ϊ 1��2��3��3��4��4��5, ���� 1��2��5.
    ����������Ϊ 1��1��1��2��3, ���� 2��3.

    ���ݷ�Χ�������� 0 \le n \le 100000��n��10000�������е�ֵ����Oval�O��1000
    Ҫ�󣺿ռ临�Ӷ� O(n)��ʱ�临�Ӷ� O(n)
    ���ף��ռ临�Ӷ� O(1)��ʱ�临�Ӷ� O(n)
  *
  * @param head ListNode��
  * @return ListNode��
  */
//struct ListNode* deleteDuplicates(struct ListNode* head) {
//    // write code here
//    if (head == NULL || head->next == NULL)
//    {
//        return head;
//    }
//
//    struct ListNode* tail = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* tail1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    // tail->val = 1001;
//    tail->next = NULL;
//    tail1->next = tail;
//    struct ListNode* prev = tail1;
//    struct ListNode* prev_p = tail1;
//    struct ListNode* tail_h = tail;
//    struct ListNode* cur = head;
//
//    // tail_h->next = cur;
//    // tail_h = tail->next;
//    int tmp = cur->val;
//    // cur = cur->next;
//
//    while (cur != NULL)
//    {
//        if (tail_h->next == NULL)
//        {
//            tail_h->next = cur;
//            tail_h = tail_h->next;
//            cur = cur->next;
//            prev = prev->next;
//        }
//        else
//        {
//            if (cur->val == tail_h->val)
//            {
//                if (prev != prev_p)
//                {
//                    tail_h = prev;
//                    prev = prev_p;
//                }
//            }
//
//            else if (cur != NULL && (cur->val != tmp))
//            {
//                prev_p = prev;
//                tmp = cur->val;
//                tail_h->next = cur;
//                tail_h = tail_h->next;
//                prev = prev->next;
//            }
//            cur = cur->next;
//
//        }
//    }
//
//    tail_h->next = NULL;
//
//    return tail->next;
//}