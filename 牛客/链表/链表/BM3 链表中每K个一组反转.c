/*
�������������еĽڵ�ÿ k ��һ�鷭ת�����ط�ת�������
��������еĽڵ������� k �ı����������ʣ�µĽڵ㱣��ԭ��
�㲻�ܸ��Ľڵ��е�ֵ��ֻ�ܸ��Ľڵ㱾��
*/



//#include <stdio.h>
//typedef struct ListNode {
//    int val;
//    struct ListNode* next;
//}ListNode;
//
//
//ListNode* CreatSList(int* arr, int sz)
//{
//    struct ListNode* head = NULL;
//    struct ListNode* tail = NULL;
//    struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//    if (newnode == NULL)
//    {
//        perror("mallic failed");
//        return;
//    }
//    newnode->val = arr[0];
//    head = tail = newnode;
//    for (int i = 1; i < sz; i++)
//    {
//        struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//        if (newnode == NULL)
//        {
//            perror("mallic failed");
//            return;
//        }
//        else
//        {
//            newnode->val = arr[i];
//            tail->next = newnode;
//            tail = tail->next;
//        }
//    }
//    tail->next = NULL;
//    return head;
//}
//
//struct ListNode* reverseBetween(struct ListNode* head, int m, int n) {
//    struct ListNode* cur = head;
//    struct ListNode* prev = (struct ListNode*)malloc(sizeof(struct ListNode));
//    prev->next = head;
//    struct ListNode* end = head;
//    struct ListNode* next = head;
//    struct ListNode* tail = NULL;
//    int flag = m;
//
//    if (m == n)
//    {
//        return cur;
//    }
//
//    while (--m)
//    {
//        prev = prev->next;
//        prev = cur;
//        cur = cur->next;
//    }
//
//    while (--n)
//    {
//        end = end->next;
//        next = end->next;
//        tail = next;
//    }
//
//    while (cur != tail)
//    {
//        struct ListNode* tmp = cur->next;
//        cur->next = next;
//        next = cur;
//        cur = tmp;
//    }
//
//    if (flag == 1)
//    {
//        prev->next = next;
//        return prev->next;
//    }
//    else
//    {
//        prev->next = next;
//        return head;
//    }
//}
//
//struct ListNode* reverseKGroup(struct ListNode* head, int k) {
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    if (k == 1 || head->next == NULL)
//    {
//        return head;
//    }
//
//    struct ListNode* cur = head;
//    int i = 1;
//    int m = k;
//    int tmp = m;
//    while (cur != NULL)
//    {
//        tmp = m;
//        while (tmp - 1)
//        {
//            cur = cur->next;
//            if (cur == NULL)
//            {
//                return head;
//            }
//            tmp--;
//        }
//        head = reverseBetween(head, i, i + k - 1);
//
//        i = i + k;
//        m += k;
//
//        cur = head;
//    }
//    return head;
//}
//
//int main(void)
//{
//
//    int arr[5] = { 1,2,3,4,5 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    ListNode* head = CreatSList(arr, sz);
//    reverseKGroup(head, 2);
//    return 0;
//}


//struct ListNode* reverse(struct ListNode* head, int k) {
//    struct ListNode* cur, * next, * pre;
//    pre = NULL, cur = head, next = head->next;
//    while (k--) {
//        cur->next = pre;
//        pre = cur;
//        cur = next;
//        next = next->next;
//    }
//    return pre;
//}
//
//struct ListNode* reverseKGroup(struct ListNode* head, int k) {
//    // write code here
//
//    struct ListNode* reverseHead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    reverseHead->next = head;//����ǰ�Ľ����ͷ�ڵ�һ��
//    struct ListNode* revHead, * revEnd;
//    int count = 0;
//    revHead = reverseHead, revEnd = reverseHead->next;//head��ʾ��ת�����ǰһ���ڵ㣬end��ʾ��ת�����һ���ڵ�
//
//    if (k == 1) return reverseHead->next;  //���k = 1,��ֱ�ӷ���
//
//    while (revEnd) {   //Ѱ������ڵ�����У���������ڵ㲻���ڣ���ֱ���˳�
//        revEnd = revEnd->next;//������ָ����һ��
//        if (++count == k) //����ҵ�һ������k�����䣬��ʼ��ת
//        {
//            revHead->next = reverse(revHead->next, k);//����ǰһ������next Ϊ ��ת������
//            while (count--) //�ҵ���ת�������������ĩβ���
//            {
//                revHead = revHead->next;
//            }
//            revHead->next = revEnd;//��ʱheadΪ��ת�õ������ĳλ�ڵ㣬nextָ��֮ǰ����ķ�ת����ĺ�һ���ڵ�
//            //ͬʱrevHead������һ�����ǰһ���ڵ㡣
//            count = 0;//count��0
//        }
//    }
//    return reverseHead->next;
//}