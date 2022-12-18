/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 * 比较规则：
一. 比较版本号时，请按从左到右的顺序依次比较它们的修订号。比较修订号时，只需比较忽略任何前导零后的整数值。比如"0.1"和"0.01"的版本号是相等的
二. 如果版本号没有指定某个下标处的修订号，则该修订号视为0。例如，"1.1"的版本号小于"1.1.1"。因为"1.1"的版本号相当于"1.1.0"，第3位修订号的下标为0，小于1
三.  version1 > version2 返回1，如果 version1 < version2 返回-1，不然返回0.

数据范围：
1 <= version1.length, version2.length <= 10001<=version1.length,version2.length<=1000
version1 和 version2 的修订号不会超过int的表达范围，即不超过 32 位整数 的范围

进阶： 空间复杂度 O(1) ， 时间复杂度  O(n)
 * 比较版本号
 * @param version1 string字符串
 * @param version2 string字符串
 * @return int整型
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
//        //排除1.0.0和1.0的情况
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
//        //提取version1 '.' 之前的版本数据
//        int i = 10;
//        while (*version1 != '.' && *version1 != '\0')
//        {
//            num1 = num1 * i + (*version1 - 48);
//            version1++;
//            //i *= 10;
//        }
//
//        //提取version2 '.' 之前的版本数据
//        int j = 10;
//        while (*version2 != '.' && *version2 != '\0')
//        {
//            num2 = num2 * j + (*version2 - 48);
//            version2++;
//            //j *= 10;
//        }
//        
//        //将'.'去除
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