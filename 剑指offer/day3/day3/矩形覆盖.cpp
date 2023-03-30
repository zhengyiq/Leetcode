//输入描述：
//2 * 1的小矩形的总个数n

//返回值描述：
//覆盖一个2 * n的大矩形总共有多少种不同的方法(从同一个方向看)

//class Solution {
//public:
//    int rectCover(int number) {
//        // dp[n] = dp[n-1] +dp[n-2]
//        if (number == 0) {
//            return 0;
//        }
//        vector<int> dp;
//        dp.resize(number + 1);
//        dp[0] = 1;
//        dp[1] = 1;
//        for (int i = 2; i <= number; ++i)
//        {
//            dp[i] = dp[i - 1] + dp[i - 2];
//        }
//        return dp[number];
//    }
//};

//class Solution {
//public:
//	int rectCover(int number) {
//		if (number < 2) { //这里要充分考虑number是[0,1]时的情况，OJ一般测试用例设计的比较全面，会有0，1传
//			进来，这个时候，后续的dp[1] = 1; 就可能报错
//				return number;
//		} /
//			/f(n) = f(n - 1) + f(n - 2)
//			int* dp = new int[number + 1];
//		dp[1] = 1;
//		dp[2] = 2;
//		for (int i = 3; i <= number; i++) {
//			dp[i] = dp[i - 1] + dp[i - 2];
//		} i
//			nt num = dp[number];
//		delete dp;
//		return num;
//	}
//};