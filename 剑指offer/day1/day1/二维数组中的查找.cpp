//��һ����ά����array�У�ÿ��һά����ĳ�����ͬ����ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳�����������һ������������������һ����ά�����һ���������ж��������Ƿ��и�������
//[
//	[1, 2, 8, 9],
//	[2, 4, 9, 12],
//	[4, 7, 10, 13],
//	[6, 8, 11, 15]
//]
//���� target = 7������ true��
//
//���� target = 3������ false��

//class Solution {
//public:
//    bool Find(int target, vector<vector<int> > array) {
//        int i = 0;
//        int j = array[0].size() - 1;
//        while (i < array.size() && j >= 0)
//        {
//            if (array[i][j] > target)
//            {
//                j--;
//            }
//            else if (array[i][j] < target)
//            {
//                i++;
//            }
//            else
//            {
//                return true;
//            }
//        }
//        return false;
//    }
//};



