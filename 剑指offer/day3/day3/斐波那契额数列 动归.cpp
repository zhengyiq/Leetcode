//斐波那契额数列 动归
//
//class Solution {
//public:
//    int Fibonacci(int n) {
//        if (0 == n) {
//            return n;
//        }
//        int first = 1;
//        int second = 1;
//        int third = 1;
//        while (n > 2)
//        {
//            third = first + second;
//            first = second;
//            second = third;
//            --n;
//        }
//
//        return third;
//    }
//};

//斐波那契额数列 剪枝
// class Solution {
// public:
//     int Fibonacci(int n) {
//         if (0 == n){
//             return n;
//         }
//         int first = 1;
//         int second = 1;
//         int third = 1;
//         while (n > 2)
//         {
//             third = first + second;
//             first = second;
//             second = third;
//             --n;
//         }

//         return third;
//     }
// };



#include <unordered_map>
class Solution {
public:
    unordered_map<int, int> filter;
    int Fibonacci(int n) {
        if (n == 0 || n == 1) {
            return n;
        }
        if (n == 2) {
            return 1;
        }

        int ppre = 0; // n-2
        if (filter.find(n - 2) == filter.end()) {
            ppre = Fibonacci(n - 2);
            filter.insert({ n - 2, ppre });
        }
        else {
            ppre = filter[n - 2];
        }

        int pre = 0; // n-1
        if (filter.find(n - 1) == filter.end()) {
            // 没有找到
            pre = Fibonacci(n - 1);
            filter.insert({ n - 1, pre });
        }
        else {
            // 找到了 
            pre = filter[n - 1];
        }

        return pre + ppre;
    }

};