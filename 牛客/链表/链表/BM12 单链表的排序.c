/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

 /**
  * ����һ���ڵ���Ϊn�������������䰴��������
    ���ݷ�Χ��0 < n \le 1000000<n��100000
    Ҫ�󣺿ռ临�Ӷ� O(n)O(n)��ʱ�临�Ӷ� O(nlogn)O(nlogn)
  * @param head ListNode�� the head node
  * @return ListNode��
  */

//void ShellSort(int* nums, int numsSize)
//{
//    int gap = numsSize;
//    while (gap > 1)
//    {
//        gap = gap / 3 + 1;
//        for (int i = 0; i < numsSize - gap; i++)
//        {
//            int end = i;
//            int tmp = nums[end + gap];
//            while (end >= 0)
//            {
//                if (tmp < nums[end])
//                {
//                    nums[end + gap] = nums[end];
//                    end -= gap;
//                }
//                else
//                {
//                    break;
//                }
//                nums[end + gap] = tmp;
//            }
//        }
//    }
//}
//
//struct ListNode* sortInList(struct ListNode* head) {
//    // write code here
//    int count = 0;
//    struct ListNode* cur = head;
//    while (cur != NULL)
//    {
//        cur = cur->next;
//        count++;
//    }
//
//    int* a = (int*)malloc(sizeof(int) * count);
//
//    cur = head;
//    int i = 0;
//    while (cur != NULL)
//    {
//        a[i++] = cur->val;
//        cur = cur->next;
//    }
//    ShellSort(a, count);
//
//    cur = head;
//    int j = 0;
//    while (cur != NULL)
//    {
//        cur->val = a[j++];
//        cur = cur->next;
//    }
//
//    return head;
//}