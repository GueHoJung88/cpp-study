#include <iostream>
#include <string>

using namespace std;

int main(){
    char ch;
    string str;
    // cout << "cin.get() Enter a character: ";
    // ch = cin.get(); // Reads a single character, including whitespace
    // cin.get();
    // cout << "You entered: " << ch << endl;

    cout << "1 getline(cin, str) Enter a character: ";
    getline(cin, str);
    cout << "You entered: " << str << endl;

    cout << "cin >> str Enter a character: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    cout << "2 getline(cin, str) Enter a character: ";
    getline(cin, str);
    cout << "You entered: " << str << endl;
    
    cout << "str = cin.get() Enter a character: ";
    str = cin.get();
    cout << "You entered: " << str << endl;

    return 0;
}