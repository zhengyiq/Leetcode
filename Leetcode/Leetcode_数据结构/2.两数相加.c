/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
//    struct ListNode* num1 = l1;
//    struct ListNode* num2 = l2;
//    struct ListNode* prev = l1;
//
//    int tmp1 = 0;
//    int tmp2 = 0;
//
//    while (num1 && num2)
//    {
//        if (((num1->val + num2->val) < 10) && num1 == l1)
//        {
//            prev = num1;
//            num1->val = num1->val + num2->val;
//            num1 = num1->next;
//            num2 = num2->next;
//            printf("1");
//        }
//        else if (((num1->val + num2->val) >= 10) && num1 == l1)
//        {
//            prev = num1;
//            tmp1 = 1;
//            num1->val = (num1->val + num2->val) % 10;
//            num1 = num1->next;
//            num2 = num2->next;
//            printf("2");
//        }
//
//        else if ((num1->val + num2->val + tmp1) >= 10)
//        {
//            prev = num1;
//            num1->val = (num1->val + num2->val + tmp1) % 10;
//            num1 = num1->next;
//            num2 = num2->next;
//            tmp1 = 1;
//            printf("3");
//        }
//        else
//        {
//            prev = num1;
//            num1->val = num1->val + num2->val + tmp1;
//            num1 = num1->next;
//            num2 = num2->next;
//            tmp1 = 0;
//            printf("4");
//        }
//    }
//    while (num1)
//    {
//        if ((num1->val + tmp1) >= 10)
//        {
//            prev = num1;
//            num1->val = (num1->val + tmp1) % 10;
//            num1 = num1->next;
//            tmp1 = 1;
//            printf("5");
//        }
//        else
//        {
//            prev = num1;
//            num1->val = num1->val + tmp1;
//            num1 = num1->next;
//            tmp1 = 0;
//            printf("6");
//        }
//    }
//    if (num2 != NULL)
//        prev->next = num2;
//    while (num2)
//    {
//        if ((num2->val + tmp1) >= 10)
//        {
//            prev = num2;
//            num2->val = (num2->val + tmp1) % 10;
//            num2 = num2->next;
//            tmp1 = 1;
//            printf("7");
//        }
//        else
//        {
//            prev = num2;
//            num2->val = num2->val + tmp1;
//            num2 = num2->next;
//            tmp1 = 0;
//            printf("8");
//        }
//    }
//
//    if (tmp1 == 1)
//    {
//        struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//        newnode->val = 1;
//        newnode->next = NULL;
//        prev->next = newnode;
//        printf("9");
//        // free(newnode);
//    }
//    else
//    {
//        prev->next = NULL;
//        printf("10");
//
//    }
//    return l1;
//}