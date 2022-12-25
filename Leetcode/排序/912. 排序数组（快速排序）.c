/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void Swap(int* num1, int* num2)
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

int GetMidIndex(int* a, int begin, int end)
{
	int mid = begin + rand() % (end - begin);
	if (a[begin] > a[mid])
	{
		if (a[end] > a[begin])
		{
			return begin;
		}
		else if (a[end] < a[mid])
		{
			return mid;
		}
		else
		{
			return end;
		}
	}
	if (a[begin] < a[mid])
	{
		if (a[end] < a[begin])
		{
			return begin;
		}
		else if (a[end] > a[mid])
		{
			return mid;
		}
		else
		{
			return end;
		}
	}
	return;
}

void QuickSort_(int* a, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}

	int mid = GetMidIndex(a, begin, end);
	Swap(&a[mid], &a[begin]);

	int left = begin;
	int right = end;
	int key = a[begin];
	int cur = begin + 1;

	while (cur <= right)
	{
		if (a[cur] < key)
		{
			Swap(&a[cur], &a[left]);
			cur++;
			left++;
		}
		else if (a[cur] > key)
		{
			Swap(&a[cur], &a[right]);
			--right;
		}
		else
		{
			cur++;
		}
	}
	QuickSort_(a, begin, left - 1);
	QuickSort_(a, right + 1, end);

}

int* sortArray(int* nums, int numsSize, int* returnSize) {

	QuickSort_(nums, 0, numsSize - 1);
	*returnSize = numsSize;
	return nums;
}