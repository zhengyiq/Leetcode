/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param nums int整型一维数组
 * @param numsLen int nums数组长度
 * @param target int整型
 * @return int整型
 */
//int search(int* nums, int numsLen, int target) {
//    // write code here
//    int begin = 0;
//    int end = numsLen - 1;
//    int mid = (begin + end) / 2;
//    while (begin <= end)
//    {
//        if (nums[mid] == target)
//        {
//            return mid;
//        }
//        else if (nums[mid] < target)
//        {
//            begin = mid + 1;
//            mid = (begin + end) / 2;
//        }
//        else
//        {
//            end = mid - 1;
//            mid = (begin + end) / 2;
//        }
//    }
//    return -1;
//}