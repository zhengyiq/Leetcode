
/**
 * 有一个长度为 n 的非降序数组，比如[1,2,3,4,5]，将它进行旋转，即把一个数组最开始的若干个元素搬到数组的末尾，变成一个旋转数组，比如变成了[3,4,5,1,2]，或者[4,5,1,2,3]这样的。请问，给定这样一个旋转数组，求数组中的最小值。

   数据范围：1≤n≤10000，数组中任意元素的值: 0≤val≤10000
   要求：空间复杂度：O(1) ，时间复杂度：O(logn)
 * @param rotateArray int整型一维数组
 * @param rotateArrayLen int rotateArray数组长度
 * @return int整型
 */
//int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
//    // write code here
//    if (rotateArrayLen == 0)
//    {
//        return 0;
//    }
//    int left = 0;
//    int right = rotateArrayLen - 1;
//    while (left < right)
//    {
//        if (rotateArray[left] < rotateArray[right])//left即为最小值
//        {
//            return rotateArray[left];
//        }
//        int mid = (left + right) / 2;
//        if (rotateArray[mid] > rotateArray[right])//最小值在右侧
//        {
//            left = mid + 1;
//        }
//        else if (rotateArray[mid] < rotateArray[right])//最小值在左侧
//        {
//            right = mid;
//        }
//        else//相等，需要调整
//        {
//            right--;
//        }
//    }
//    return rotateArray[left];
//}