/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

 /**
  * 给定一个节点数为n的无序单链表，对其按升序排序。
    数据范围：0 < n \le 1000000<n≤100000
    要求：空间复杂度 O(n)O(n)，时间复杂度 O(nlogn)O(nlogn)
  * @param head ListNode类 the head node
  * @return ListNode类
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