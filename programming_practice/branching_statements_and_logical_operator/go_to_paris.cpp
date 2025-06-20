#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch =='P'){
        cout << "You are about to move to Paris" << endl;
        goto paris;}

    cout << "You are not in Paris" << endl;

    paris: cout << "You are in Paris" << endl;
    return 0;
}