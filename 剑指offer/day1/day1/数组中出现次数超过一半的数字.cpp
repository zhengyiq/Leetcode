//给一个长度为 n 的数组，数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。
//例如输入一个长度为9的数组[1, 2, 3, 2, 2, 2, 5, 4, 2]。由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2。

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