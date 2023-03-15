//输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，所有的偶数位于数组的后半部分，并保证奇数和奇数，偶数和偶数之间的相对位置不变。
//class Solution {
//public:
//    void reOrderArray(vector<int>& array) {
//        int _odd = 0;
//        int sz = array.size();
//        for (int i = 0; i < sz; i++)
//        {
//            if (array[i] & 1) // 获取数组中当前数为奇数的数
//            {
//                int tmp = array[i];
//                for (int j = i; j > _odd; j--) // 将当前技术前面的偶数至前方已经排好的奇数中的偶数往后移动
//                {
//                    array[j] = array[j - 1];
//                }
//                array[_odd++] = tmp;
//            }
//
//        }
//    }
//};