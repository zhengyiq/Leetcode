//#include <stdio.h>
//#include <stdlib.h>
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
//	for (int  i = 1; i < sz; i++)
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
////203 - �Ƴ�����Ԫ��
////����һ�������ͷ�ڵ� head ��һ������ val ��
////����ɾ���������������� Node.val == val �Ľڵ㣬������ �µ�ͷ�ڵ� ��
//
////β�巨 - �����ڱ�λ
//
////struct ListNode* removeElements(struct ListNode* head, int val) {
////	ListNode* newnode = NULL;
////	ListNode* tail = newnode;	
////	ListNode* cur = head;
////
////	while (cur)
////	{
////		if (cur->val != val)
////		{
////			if (tail == NULL)
////			{
////				newnode = tail = cur;
////			}
////			else
////			{
////				tail->next = cur;
////				tail = tail->next;
////			}
////			cur = cur->next;
////		}
////		else
////		{
////			ListNode* tmp = cur->next;
////			free(cur);
////			cur = tmp;
////		}
////	}
////	if (tail)
////		tail->next = NULL;
////	return newnode;
////}
//
////β�巨 - ���ڱ�λ
//
//struct ListNode* removeElements(struct ListNode* head, int val) {
//	struct ListNode* guard = (struct ListNode*)malloc(sizeof(struct ListNode));
//	guard->next = NULL;
//	//struct ListNode* cur = head;
//	struct ListNode* tmp = guard;
//	while (head)
//	{
//		if (head->val != val)
//		{
//			struct ListNode* cur = head->next;
//			tmp->next = head;
//			head = cur;
//			tmp = tmp->next;
//		}
//		else
//		{
//			struct ListNode* cur = head->next;
//			free(head);
//			head = cur;
//		}
//	}
//	if (tmp)
//		tmp->next = NULL;
//	struct ListNode* ret = guard->next;
//	free(guard);
//	return ret;
//}
//
//
//
//int main(void)
//{
//
//	int arr[7] = { 1,2,6,3,4,5,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	ListNode* head = CreatSList(arr, sz);
//	ListNode* ret = removeElements(head, 6);
//	return 0;
//}
