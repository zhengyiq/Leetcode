/**
 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
 * ��һ����ά����array�У�ÿ��һά����ĳ�����ͬ����ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳�����������һ������������������һ����ά�����һ���������ж��������Ƿ��и�������
 *
 * @param target int����
 * @param array int���Ͷ�ά����
 * @param arrayRowLen int array��������
 * @param arrayColLen int* array��������
 * @return bool������
 */
//bool Find(int target, int** array, int arrayRowLen, int* arrayColLen) {
//    // write code here
//    int i = 0;
//    int j = *arrayColLen - 1;
//    while (i <= arrayRowLen - 1 && j >= 0)
//    {
//        if (array[i][j] == target)
//        {
//            return true;
//        }
//        else if (array[i][j] > target)
//        {
//            j--;
//        }
//        else //array[i][j] < target
//        {
//            i++;
//        }
//    }
//
//    return false;
//}