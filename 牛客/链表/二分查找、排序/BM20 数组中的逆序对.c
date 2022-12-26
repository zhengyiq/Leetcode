/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 
 * 描述
   在数组中的两个数字，如果前面一个数字大于后面的数字，则这两个数字组成一个逆序对。输入一个数组,求出这个数组中的逆序对的总数P。并将P对1000000007取模的结果输出。 即输出P mod 1000000007
   数据范围：  对于 50% 的数据, size≤10^4
   对于 100% 的数，size≤10^5
   数组中所有数字的值满足 0≤val≤10%^9
   要求：空间复杂度 O(n)O(n)，时间复杂度 O(nlogn)O(nlogn)
   
   输入描述：
   题目保证输入的数组中没有的相同的数字
 *
 * @param data int整型一维数组
 * @param dataLen int data数组长度
 * @return int整型
 */

//方法一：暴力统计
//int InversePairs(int* data, int dataLen) {
//    // write code here
//    unsigned int count = 0;
//    for (int i = 0; i < dataLen - 1; i++)
//    {
//        for (int j = i; j < dataLen - 1; j++)
//        {
//            if (data[i] > data[j + 1])
//            {
//                count++;
//            }
//        }
//    }
//    return count % 1000000007;
//}