// ����һ�������ͷ�ڵ㣬�������β��ͷ��˳�򷵻�ÿ���ڵ��ֵ�������鷵�أ���

/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/

//void _printListFromTailToHead(ListNode* head, vector<int>& v) {
//    if (head->next != nullptr) {
//        _printListFromTailToHead(head->next, v);
//    }
//
//    v.push_back(head->val);
//
//    return;
//}
//
//class Solution {
//public:
//    vector<int> printListFromTailToHead(ListNode* head) {
//        vector<int> v;
//        if (head == nullptr)
//        {
//            return v;
//        }
//        _printListFromTailToHead(head, v);
//        return v;
//    }
//};
