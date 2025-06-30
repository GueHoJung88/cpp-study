// 2 배열 호출 시 arr[]와 크기를 나타내는 별도의 문자를 따로 불러야 하는 이유
#include<iostream>
using namespace std;

const int n = 5;

void printArray(int arr[n]);

int main() {
	int test_array[5] = {1, 2, 3, 4, 5};
	int a = 5;

	int test_array2[4] = { 1, 2, 3, 4 };
	int test_array3[6] = { 1, 2, 3, 4, 5, 6 };

	printArray(test_array);
	printArray(test_array2);
	printArray(test_array3);
}

void printArray(int arr[n]) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
