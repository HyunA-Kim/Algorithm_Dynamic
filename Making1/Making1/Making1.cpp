#include<iostream>

using namespace std;

int main() {
	int num;
	int count = 0;
	cin >> num;
	while (1) {
		if (num % 3 == 0) num = num / 3;
		else if (num % 2 == 0) num = num / 2;
		else num = num - 1;
		cout << num;
		count++;
		if (num == 1) break;
	}
	cout << count;
	return 0;
}