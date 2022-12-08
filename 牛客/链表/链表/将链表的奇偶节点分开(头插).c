//#include <stdio.h>
//#include <string.h>
//
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
//struct ListNode* oddEvenList(struct ListNode* head) {
//	// write code here
//	if (head == NULL)
//	{
//		return NULL;
//	}
//	struct ListNode* _odd = NULL;
//	struct ListNode* _even = NULL;
//	struct ListNode* cur = head;
//
//	while (cur != NULL)
//	{
//		struct ListNode* next = cur->next;
//
//		if (cur->val % 2 == 0)
//		{
//			cur->next = _even;
//			_even = cur;
//			cur = next;
//		}
//
//		else if (cur->val % 2 != 0)
//		{
//			cur->next = _odd;
//			_odd = cur;
//			cur = next;
//		}
//	}
//
//	struct ListNode* tail = _odd;
//
//	while (tail->next != NULL)
//	{
//		tail = tail->next;
//	}
//	tail->next = _even;
//
//	return _odd;
//}
//
//
//int main(void)
//{
//
//	int arr[] = { 1,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	ListNode* head = CreatSList(arr, sz);
//	oddEvenList(head);
//	return 0;
//}
