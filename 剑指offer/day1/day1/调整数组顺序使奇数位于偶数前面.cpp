//����һ���������飬ʵ��һ�����������������������ֵ�˳��ʹ�����е�����λ�������ǰ�벿�֣����е�ż��λ������ĺ�벿�֣�����֤������������ż����ż��֮������λ�ò��䡣
//class Solution {
//public:
//    void reOrderArray(vector<int>& array) {
//        int _odd = 0;
//        int sz = array.size();
//        for (int i = 0; i < sz; i++)
//        {
//            if (array[i] & 1) // ��ȡ�����е�ǰ��Ϊ��������
//            {
//                int tmp = array[i];
//                for (int j = i; j > _odd; j--) // ����ǰ����ǰ���ż����ǰ���Ѿ��źõ������е�ż�������ƶ�
//                {
//                    array[j] = array[j - 1];
//                }
//                array[_odd++] = tmp;
//            }
//
//        }
//    }
//};