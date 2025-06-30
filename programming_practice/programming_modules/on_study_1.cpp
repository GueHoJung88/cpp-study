#include<iostream>
#include<string>

using namespace std;

double calculate(double a, double b) {
	return a * b;
}

double calculate(double a, double b, double c) {
	return a * b * c;
}

int main()
{
	double x, y, z, answer;
	char select;

	cout << "길이 x값을 입력하십시오.: ";
	cin >> x;
	cout << "너비 y값을 입력하십시오.: ";
	cin >> y;
	cout << "높이 z값을 입력하십시오.: ";
	cin >> z;
	cout << "직사각형의 넓이를 구하려면 s를, 직육면체의 부피를 구하려면 v를 입력하십시오.: ";
	cin >> select;

	switch (select) {
		case 's':
		{
			answer = calculate(x, y);
			cout << "x와 y로 구한 넓이는 " << answer << "입니다." << endl;
			break;
		}
		case 'v':
		{
			answer = calculate(x, y, z);
			cout << "x와 y와 z로 구한 넓이는 " << answer << "입니다." << endl;
			break;
		}
		default:
		{
			cout << "잘못 입력했습니다." << endl;
		}

	}

	return 0;
}