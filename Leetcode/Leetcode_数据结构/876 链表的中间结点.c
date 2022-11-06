//struct ListNode* middleNode(struct ListNode* head) {
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//    }
//    return slow;
//}


// struct ListNode* middleNode(struct ListNode* head){
//     int point = 1;
//     struct ListNode* cur = head;
//     //找得到该链表一共有多少个节点
//     while (cur)
//     {
//         cur = cur->next;
//         point++;
//     }
//     cur = head;
//     //辨别出是奇数个节点还是偶数个节点
//     //奇数个节点
//     if (point % 2 == 0)
//     {
//         point = point / 2 ;
//         while (point > 1)
//         {
//             cur = cur->next;
//             point--;
//         }
//     }
//     //偶数个节点
//     else
//     {
//         point = point / 2 ;
//         while (point >= 1)
//         {
//             cur = cur->next;
//             point--;
//         }
//     }
//     return cur;
// }