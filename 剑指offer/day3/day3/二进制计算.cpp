//描述
//输入一个整数 n ，输出该数32位二进制表示中1的个数。其中负数用补码表示。

//class Solution {
//public:
//    int  NumberOf1(int n) {
//        int count = 0;
//        while (n)
//        {
//            n &= n - 1;
//            ++count;
//        }
//        return count;
//    }
//};