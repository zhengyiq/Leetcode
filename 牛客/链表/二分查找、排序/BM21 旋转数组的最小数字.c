
/**
 * ��һ������Ϊ n �ķǽ������飬����[1,2,3,4,5]������������ת������һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����һ����ת���飬��������[3,4,5,1,2]������[4,5,1,2,3]�����ġ����ʣ���������һ����ת���飬�������е���Сֵ��

   ���ݷ�Χ��1��n��10000������������Ԫ�ص�ֵ: 0��val��10000
   Ҫ�󣺿ռ临�Ӷȣ�O(1) ��ʱ�临�Ӷȣ�O(logn)
 * @param rotateArray int����һά����
 * @param rotateArrayLen int rotateArray���鳤��
 * @return int����
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
//        if (rotateArray[left] < rotateArray[right])//left��Ϊ��Сֵ
//        {
//            return rotateArray[left];
//        }
//        int mid = (left + right) / 2;
//        if (rotateArray[mid] > rotateArray[right])//��Сֵ���Ҳ�
//        {
//            left = mid + 1;
//        }
//        else if (rotateArray[mid] < rotateArray[right])//��Сֵ�����
//        {
//            right = mid;
//        }
//        else//��ȣ���Ҫ����
//        {
//            right--;
//        }
//    }
//    return rotateArray[left];
//}