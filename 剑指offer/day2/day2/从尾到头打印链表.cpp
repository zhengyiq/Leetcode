// 输入一个链表的头节点，按链表从尾到头的顺序返回每个节点的值（用数组返回）。

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
