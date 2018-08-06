#include<iostream>
using namespace std;
int main(void) {
	int T,n;
	int dp[12];
	dp[1] = 1; dp[2] = 2; dp[3] = 4;
	cin >> T;
	while (T--) {
		cin >> n;
		for (int i = 4; i <= n; i++) {
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3]; 
		}
		cout << dp[n]<<'\n';
	}
}