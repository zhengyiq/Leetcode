/**
 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
 *
 *
 * @param nums int����һά����
 * @param numsLen int nums���鳤��
 * @param target int����
 * @return int����
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