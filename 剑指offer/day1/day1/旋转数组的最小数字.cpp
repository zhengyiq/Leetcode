//��һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת�� ����һ���ǵݼ�����������һ����ת�������ת�������СԪ�ء� ��������{ 3,4,5,1,2 }Ϊ{ 1,2,3,4,5 }��һ����ת�����������СֵΪ1�� NOTE������������Ԫ�ض�����0���������СΪ0���뷵��0

//class Solution {
//public:
//    int minNumberInRotateArray(vector<int> rotateArray) {
//        vector<int>& arr = rotateArray;
//        int left = 0;
//        int right = arr.size() - 1;
//        // int mid = (left + right) >> 1;
//        int mid = 0; // �����ʼλ�õ�left������С��ֵ
//
//        while (arr[left] >= arr[right]) // ����ת֮��Ļ�����
//        {
//            if ((right - left) == 1) // �����߲�Ϊ1ʱ������ֹright��ΪѰ�����Сֵ
//            {
//                mid = right;
//                break;
//            }
//
//            mid = left + ((right - left) >> 1); // ����midֵ
//
//            if ((arr[left] == arr[mid]) && (arr[right] == arr[mid])) // �����кܶ���ͬ��ֵ��ͨ������Ѱ����С
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
//            if (arr[left] > arr[mid]) // ˵��ҪѰ�ҵ��������������
//            {
//                right = mid;
//            }
//            else // ˵��ҪѰ�ҵ��������Ұ����򣬵�left < midʱ˵��Ѱ�����Сֵ����ߣ���left == midʱ��˵����Сֵ��mid�����ұߡ�
//            {
//                left = mid;
//            }
//        }
//        return arr[mid];
//    }
//};
