//����һ���򵥶��鷽ʽ - Ŀǰ�˽�
//״̬���壺f(i): ����į�׵�������
//״̬���ƣ�f(i) = f(i-1)+f(i-2)
//��ʼ״̬: f(0) = 1��0̨�ף�������㣬����0̨�׵ķ�����һ�֣����ǲ���[��������е���֣��������룬�����
//������Ϊ0����˵�������ܿ�ʼ...]��, f(1) = 1;
//class Solution {
//public:
//	int jumpFloor(int number) {
//		//dp[n] = dp[n-1]+dp[n-2];
//		int* dp = new int[number + 1];
//		dp[0] = 1;
//		dp[1] = 1;
//		for (int i = 2; i <= number; i++) {
//			dp[i] = dp[i - 1] + dp[i - 2];
//		} 
//		int num = dp[number]; //��number�±꣬���ǵ�number��̨��
//		delete[] dp;
//		return num;
//	}
//};
//��������
//����ϸ����������룬�ѵ����������쳲�����������
//class Solution {
//public:
//	// ״̬��f(n): ����n��̨�׵���������������n��ֻ���Ǵ�n-1 or n-2��������
//	// ���ƹ�ʽ������f(n) = f(n-1) + f(n-2)
//	// ��ʼֵ��f(1) = 1, f(2) = 2�� ���Կ��ɣ���ƽ��(0)��ʼ����1̨�ף�����1�֡���������2̨�ף������ַ�
//	ʽ
//		int jumpFloor(int n) {
//		int first = 1; //��һ��̨��
//		int second = 2;//�ڶ���̨��
//		int third = n; //����nֱ�ӾͿ�����f(1) = 1 && f(2) = 2�����
//		while (n > 2) {
//			third = first + second;
//			first = second;
//			second = third;
//			--n;
//		} r
//			eturn third;
//	}
//};