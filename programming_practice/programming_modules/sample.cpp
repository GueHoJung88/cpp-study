#include <iostream>
#include <string>
const int size = 5;
int fill_array(double arr[], int size);
// int fill_array(int arr[size]);

int main()
{
    using namespace std;
    double tmp[4] = {1,2,3,4};
    // int result = fill_array(tmp, 4);

    float g_earth = 9.80;
    float * pe;

    // pe = &g_earth;
    // cout << g_earth;
    // cout << pe;
    // cout << *pe;

    char * str = "galumphing";

    cout << str << endl;
    cout << *str << endl;
    cout << *(str+1) << endl;
    cout << (*str) << endl;

    string list[5];

    char chs[80];

    cin.getline(chs, 80);
    cout << chs << endl;

}

int fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for(i=0; i<limit; i++)
    {
        cout << (i+1) << "번 부동산의 가격: ";
        cin >> temp;
        if(!cin){
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "입력 불량; 입력 과정을 끝내겠습니다.\n";
            break;
        }
        else if (temp < 0)
            break;
        ar[i] = temp;
    }
    return i;
}