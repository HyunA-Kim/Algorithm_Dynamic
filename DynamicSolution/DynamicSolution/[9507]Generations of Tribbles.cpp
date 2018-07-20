#include<iostream>
using namespace std;
int main(void) {
	int t, n, max = -1;
	cin >> t;
	long long int array[68];
	
	for (int i = 0; i < t; i++) {
		cin >> n;
		if (max < n) {
			for (int j = max+1; j <= n; j++) {
				if (j < 2) array[j] = 1;
				else if (j == 2) array[j] = 2;
				else if (j == 3) array[j] = 4;
				else {
					array[j] = array[j - 1] + array[j - 2] + array[j - 3] + array[j - 4];
				}
			}
			max = n;
		}
		cout << array[n] << "\n";
		
	}
	
}
