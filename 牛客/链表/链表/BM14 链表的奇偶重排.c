/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */
 /**
  * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
  * 给定一个单链表，请设定一个函数，将链表的奇数位节点和偶数位节点分别放在一起，重排后输出。
	注意是节点的编号而非节点的数值。

	数据范围：节点数量满足 0≤n≤10^5，节点中的值都满足 0≤val≤1000
	要求：空间复杂度 O(n)O(n)，时间复杂度 O(n)O(n)
  *
  * @param head ListNode类
  * @return ListNode类
  */
//struct ListNode* oddEvenList(struct ListNode* head) {
//	// write code here
//	if (head == NULL)
//	{
//		return NULL;
//	}
//	struct ListNode* _odd = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* _even = (struct ListNode*)malloc(sizeof(struct ListNode));
//	_odd->next = NULL;
//	_even->next = NULL;
//
//	struct ListNode* cur = head;
//	struct ListNode* cur_odd = _odd;
//	struct ListNode* cur_even = _even;
//
//	int count = 1;
//
//	while (cur != NULL)
//	{
//		struct ListNode* next = cur->next;
//
//		if (count % 2 == 0)
//		{
//			cur_even->next = cur;
//			cur_even = cur_even->next;
//			cur = next;
//			count++;
//		}
//
//		else if (count % 2 != 0)
//		{
//			cur_odd->next = cur;
//			cur_odd = cur_odd->next;
//			cur = next;
//			count++;
//		}
//	}
//
//	cur_odd->next = _even->next;
//	cur_even->next = NULL;
//
//	return _odd->next;
//}