//把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。 输入一个非递减排序的数组的一个旋转，输出旋转数组的最小元素。 例如数组{ 3,4,5,1,2 }为{ 1,2,3,4,5 }的一个旋转，该数组的最小值为1。 NOTE：给出的所有元素都大于0，若数组大小为0，请返回0

//class Solution {
//public:
//    int minNumberInRotateArray(vector<int> rotateArray) {
//        vector<int>& arr = rotateArray;
//        int left = 0;
//        int right = arr.size() - 1;
//        // int mid = (left + right) >> 1;
//        int mid = 0; // 假如初始位置的left就是最小的值
//
//        while (arr[left] >= arr[right]) // 在旋转之后的基础上
//        {
//            if ((right - left) == 1) // 当两者差为1时可以终止right即为寻求的最小值
//            {
//                mid = right;
//                break;
//            }
//
//            mid = left + ((right - left) >> 1); // 修正mid值
//
//            if ((arr[left] == arr[mid]) && (arr[right] == arr[mid])) // 若是有很多相同的值，通过遍历寻找最小
//            {
//                int result = arr[left];
//                for (int i = left + 1; i < right; i++)
//                {
//                    if (result > arr[i])
//                    {
//                        result = arr[i];
//                    }
//                }
//                return result;
//            }
//            if (arr[left] > arr[mid]) // 说明要寻找的数据在左半区域
//            {
//                right = mid;
//            }
//            else // 说明要寻找的数据在右半区域，当left < mid时说明寻求的最小值在左边，当left == mid时，说明最小值在mid或者右边。
//            {
//                left = mid;
//            }
//        }
//        return arr[mid];
//    }
//};
