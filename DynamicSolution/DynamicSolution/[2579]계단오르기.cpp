#include<iostream>
using namespace std;
int main(void) {
	int count,num;
	long int array[300] = { 0 };
	long int result[300] = { 0 };
	cin >> count;
	for (int i = 1; i <= count; i++) {
		cin >> num;
		array[i] = num;
	}
	for (int i = 1; i <= count; i++) {
		if (i == 1) {
			result[i] = array[i];
		}
		else if (i == 2) {
			if (array[1] + array[2] > array[2]) result[i] = array[1] + array[2];
			else result[i] = array[2];
		}
		else {
			if ((result[i-2]+array[i]>array[i-1]+array[i]+result[i-3])) {
				result[i] = result[i-2]+array[i];
			}
			else {
				result[i] = array[i - 1] + array[i] + result[i - 3];
			}
		}
	}

	cout << result[count];
}