///**
// * struct ListNode {
// *	int val;
// *	struct ListNode *next;
// * };
// */
// /**
//  * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//  * ����һ������Ϊ n �������������е�Ԫ�ص�ֵΪ ai �����ظ������е�����k���ڵ㡣�����������С��k���뷵��һ������Ϊ 0 ������
//  *
//  * @param pHead ListNode��
//  * @param k int����
//  * @return ListNode��
//  */
//struct ListNode* FindKthToTail(struct ListNode* pHead, int k) {
//    // write code here
//    struct ListNode* slow = pHead;
//    struct ListNode* fast = pHead;
//
//    while (k--)
//    {
//        if (fast == NULL)
//        {
//            return NULL;
//        }
//        fast = fast->next;
//    }
//
//    while (fast != NULL)
//    {
//        slow = slow->next;
//        fast = fast->next;
//    }
//    return slow;
//}