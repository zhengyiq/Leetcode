/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int gap = numsSize;
    while (gap > 1)
    {
        gap = gap / 3 + 1;
        for (int i = 0; i < numsSize - gap; i++)
        {
            int end = i;
            int tmp = nums[end + gap];
            while (end >= 0)
            {
                if (tmp < nums[end])
                {
                    nums[end + gap] = nums[end];
                    end -= gap;
                }
                else
                {
                    break;
                }
                nums[end + gap] = tmp;
            }
        }
    }
    return nums;
}