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
//     //�ҵõ�������һ���ж��ٸ��ڵ�
//     while (cur)
//     {
//         cur = cur->next;
//         point++;
//     }
//     cur = head;
//     //�������������ڵ㻹��ż�����ڵ�
//     //�������ڵ�
//     if (point % 2 == 0)
//     {
//         point = point / 2 ;
//         while (point > 1)
//         {
//             cur = cur->next;
//             point--;
//         }
//     }
//     //ż�����ڵ�
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