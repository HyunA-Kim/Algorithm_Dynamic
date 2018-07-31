#include<iostream>
#include<algorithm>
using namespace std;
int main(void) {
	int dp[101];// 배열의 값이 1일때 닫힘, -1일때 열림
	int T,count=0;
	cin >> T;

	
	for (int i = 0; i < T; i++) {
		fill(dp, dp + 101, 1);
		int num;
		cin >> num;
		for (int j = 1; j <= num; j++) {
			for (int k = 1;  k <= num; k++) {
				if (k%j == 0) {
					dp[k] = dp[k] * (-1);
				}
			}
		}
		
		for (int k = 1; k <= num; k++) {
			if (dp[k] == -1) count++;
		}
		cout << count << '\n';
		count = 0;
	}
}