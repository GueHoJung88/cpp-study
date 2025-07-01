
#include <iostream>
#include <string>
using namespace std;
// 함수 선언
string version1(const string & s1, const string & s2);
const string & version2(string & s1, const string & s2); // 부작용 있음
const string & version3(string & s1, const string & s2);   // 수정: 안전하게 값 반환
int main()
{
    string input;
    string copy;
    string result;
    cout << "Enter a string: ";
    getline(cin, input);
    copy = input;
    cout << "Your string as entered: " << input << endl;
    result = version1(input, "***");
    cout << "Your string enhanced (version1): " << result << endl;
    cout << "Your original string: " << input << endl;
    result = version2(input, "###");
    cout << "Your string enhanced (version2): " << result << endl;
    cout << "Your original string (modified): " << input << endl;
    cout << "Resetting original string.\n";
    input = copy;
    result = version3(input, "@@@");
    cout << "Your string enhanced (version3): " << result << endl;
    cout << "Your original string: " << input << endl;
    return 0;
}
// 버전1: 문자열 장식 후 새로운 문자열 반환 (복사 방식)
string version1(const string & s1, const string & s2)
{
    string temp = s2 + s1 + s2;
    return temp;
}
// 버전2: 참조로 받은 문자열 자체를 변경하고 반환 (부작용 있음)
const string & version2(string & s1, const string & s2)
{
    s1 = s2 + s1 + s2;
    return s1;
}
// 버전3: 문자열 장식 후 값으로 반환 (지역 변수 참조 반환 방지)
const string & version3(string & s1, const string & s2)
{
    string temp = s2 + s1 + s2;
    return temp; // 값 복사로 안전하게 반환
}
