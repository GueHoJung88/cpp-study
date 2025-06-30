// 3 const와 일반의 할당 관계

#include<iostream>

using namespace std;

int main() {
	const float g_earth = 9.80;
	const float* pe = &g_earth;

	cout << pe;

	const float g_moon = 1.63;
	float* pm = &g_moon;

	return 0;
}
