/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */
 /**
  * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
  * ����һ�����������趨һ�������������������λ�ڵ��ż��λ�ڵ�ֱ����һ�����ź������
	ע���ǽڵ�ı�Ŷ��ǽڵ����ֵ��

	���ݷ�Χ���ڵ��������� 0��n��10^5���ڵ��е�ֵ������ 0��val��1000
	Ҫ�󣺿ռ临�Ӷ� O(n)O(n)��ʱ�临�Ӷ� O(n)O(n)
  *
  * @param head ListNode��
  * @return ListNode��
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