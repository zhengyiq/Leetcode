//����������
//2 * 1��С���ε��ܸ���n

//����ֵ������
//����һ��2 * n�Ĵ�����ܹ��ж����ֲ�ͬ�ķ���(��ͬһ������)

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
//		if (number < 2) { //����Ҫ��ֿ���number��[0,1]ʱ�������OJһ�����������ƵıȽ�ȫ�棬����0��1��
//			���������ʱ�򣬺�����dp[1] = 1; �Ϳ��ܱ���
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