//��һ������Ϊ n �����飬��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡�
//��������һ������Ϊ9������[1, 2, 3, 2, 2, 2, 5, 4, 2]����������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2��

//class Solution {
//public:
//    int MoreThanHalfNum_Solution(vector<int>& numbers) {
//        int candidate = numbers[0];
//        int count = 1;
//        for (int i = 1; i < numbers.size(); ++i)
//        {
//            if (candidate == numbers[i])
//            {
//                count++;
//            }
//            else
//            {
//                count--;
//            }
//            if (count == 0)
//            {
//                candidate = numbers[i + 1];
//                // count++;
//            }
//        }
//        return candidate;
//    }
//};