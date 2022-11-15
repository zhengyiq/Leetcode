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
//        //新节点数据的拷贝
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
//        //节点数据的连接
//        cur->next = newnode;
//
//        //原节点的下一个节点
//        cur = newnode->next;
//    }
//
//    //更新随机指针
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
//        //深拷贝节点连接
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