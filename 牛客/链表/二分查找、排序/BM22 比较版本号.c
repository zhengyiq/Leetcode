/**
 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
 * �ȽϹ���
һ. �Ƚϰ汾��ʱ���밴�����ҵ�˳�����αȽ����ǵ��޶��š��Ƚ��޶���ʱ��ֻ��ȽϺ����κ�ǰ����������ֵ������"0.1"��"0.01"�İ汾������ȵ�
��. ����汾��û��ָ��ĳ���±괦���޶��ţ�����޶�����Ϊ0�����磬"1.1"�İ汾��С��"1.1.1"����Ϊ"1.1"�İ汾���൱��"1.1.0"����3λ�޶��ŵ��±�Ϊ0��С��1
��.  version1 > version2 ����1����� version1 < version2 ����-1����Ȼ����0.

���ݷ�Χ��
1 <= version1.length, version2.length <= 10001<=version1.length,version2.length<=1000
version1 �� version2 ���޶��Ų��ᳬ��int�ı�ﷶΧ���������� 32 λ���� �ķ�Χ

���ף� �ռ临�Ӷ� O(1) �� ʱ�临�Ӷ�  O(n)
 * �Ƚϰ汾��
 * @param version1 string�ַ���
 * @param version2 string�ַ���
 * @return int����
 */

//#include <stdio.h>
//
//int compare(char* version1, char* version2) {
//    // write code here
//    int num1 = 0;
//    int num2 = 0;
//
//    if (*version1 == '0' && *version2 == '0')
//    {
//        version1 += 2;
//        version2 += 2;
//    }
//
//    while (*version1 != '\0' || *version2 != '\0')
//    {
//        num1 = 0;
//        num2 = 0;
//
//        //�ų�1.0.0��1.0�����
//        if (*version1 == '\0' && *version2 != '\0')
//        {
//            num1 = ('0' - 48);
//        }
//
//        if (*version1 != '\0' && *version2 == '\0')
//        {
//            num2 = ('0' - 48);
//        }   
//
//        //��ȡversion1 '.' ֮ǰ�İ汾����
//        int i = 10;
//        while (*version1 != '.' && *version1 != '\0')
//        {
//            num1 = num1 * i + (*version1 - 48);
//            version1++;
//            //i *= 10;
//        }
//
//        //��ȡversion2 '.' ֮ǰ�İ汾����
//        int j = 10;
//        while (*version2 != '.' && *version2 != '\0')
//        {
//            num2 = num2 * j + (*version2 - 48);
//            version2++;
//            //j *= 10;
//        }
//        
//        //��'.'ȥ��
//        if (num1 > num2)
//        {
//            return 1;
//        }
//        else if (num1 < num2)
//        {
//            return -1;
//        }
//
//        if (*version1 > 0)
//        {
//            version1++;
//        }
//        if (*version2 > 0)
//        {
//            version2++;
//        }
//
//        if (*version1 == '\0' && *version2 == '\0')
//        {
//            break;
//        }
//    }
//
//    if (*version1 == '\0' && *version2 != '\0')
//    {
//        return -1;
//    }
//    else if (*version1 != '\0' && *version2 == '\0')
//    {
//        return 1;
//    }
//
//    return 0;
//}
//
//int main()
//{
//    char version1[] = "0.226" ;
//    char version2[] = "0.38";
//    compare(version1, version2);
//}