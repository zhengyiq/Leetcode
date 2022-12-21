/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void Swap(int* num1, int* num2)
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

// ���µ���������γɴ��
void AdjustDwon(int* a, int n, int root)
{
	int child = root * 2 + 1;

	while (child < n)
	{
		if ((child + 1 < n) && (a[child + 1] > a[child]))
		{
			child++;
		}

		if (a[child] > a[root])
		{
			//��������
			Swap(&a[child], &a[root]);
			//��������
			root = child;
			child = root * 2 + 1;
		}
		else
		{
			break;
		}
	}
}


int* sortArray(int* nums, int numsSize, int* returnSize) {
	// ������
	for (int i = (numsSize - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDwon(nums, numsSize, i);
	}
	int end = numsSize - 1;
	while (end > 0)
	{
		Swap(&nums[0], &nums[end]);
		AdjustDwon(nums, end--, 0);
	}
	*returnSize = numsSize;
	return nums;
}