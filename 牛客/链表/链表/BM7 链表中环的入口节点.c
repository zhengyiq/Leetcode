///**
// * struct ListNode {
// *	int val;
// *	struct ListNode *next;
// * };
// */
// /**
//  * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//  * ��һ������Ϊn���������а����������ҳ�������Ļ�����ڽ�㣬���򣬷���null��
//  *
//  * @param pHead ListNode��
//  * @return ListNode��
//  */
//struct ListNode* EntryNodeOfLoop(struct ListNode* pHead) {
//    // write code here
//    struct ListNode* slow = pHead;
//    struct ListNode* fast = pHead;
//
//    //����ż����������������
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//        if (fast == slow)
//        {
//            struct ListNode* newnode = fast;
//            while (pHead)
//            {
//                if (pHead == newnode)
//                {
//                    return pHead;
//                }
//                pHead = pHead->next;
//                newnode = newnode->next;
//            }
//        }
//    }
//    return NULL;
//}
