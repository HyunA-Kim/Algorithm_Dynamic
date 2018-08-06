#include<iostream>
using namespace std;

int main(void) {
	int i,t,n;
	cin >> t;

	for(int k=0; k<t; k++) {
		cin >> n;
		for (i = 1; i*i <= n; i++);
		cout << (i - 1) << '\n';
	}
}