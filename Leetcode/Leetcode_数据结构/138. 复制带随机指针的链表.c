/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */

//https://leetcode.cn/problems/copy-list-with-random-pointer/
//struct Node* copyRandomList(struct Node* head) {
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    struct Node* cur = head;
//    while (cur != NULL)
//    {
//        struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
//
//        //�½ڵ����ݵĿ���
//        newnode->val = cur->val;
//        newnode->next = cur->next;
//        newnode->random = cur->random;
//        // if (cur->random != NULL)
//        // {
//        //     newnode->random = cur->random->next;
//        // }
//        // else
//        // {
//        //     newnode->random = cur->random;
//        // }
//
//        //�ڵ����ݵ�����
//        cur->next = newnode;
//
//        //ԭ�ڵ����һ���ڵ�
//        cur = newnode->next;
//    }
//
//    //�������ָ��
//    cur = head;
//    while (cur != NULL)
//    {
//        if (cur->random != NULL)
//        {
//            cur->random = cur->random->next;
//        }
//        else
//        {
//            cur->random = NULL;
//        }
//        cur = cur->next;
//    }
//
//    struct Node* rehead = head->next;
//    struct Node* fast = head->next->next;
//    struct Node* slow = head->next;
//
//    while (fast != NULL)
//    {
//        //����ڵ�����
//        struct Node* _next = fast->next;
//        slow->next = fast->next;
//        fast = _next;
//
//        //
//        fast = fast->next;
//        slow = slow->next;
//    }
//
//    return rehead;
//
//}