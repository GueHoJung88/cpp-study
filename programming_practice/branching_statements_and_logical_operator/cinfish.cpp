#include <iostream>

const int Max = 5;

int main(){
    using namespace std;

    double fish[Max];
    
    cout << "Please enter the wights of your fish.\n";
    cout << "You May enter up to " << Max << " fish <q to terminate>.\n";
    cout << "Fish #1: ";
    int i = 0;
    while (i < Max && cin >> fish[i]) {
        if (++i < Max)
        {
            cout << " i : " << i << endl;
            cout << "i + 1 : " << i + 1 << endl;
            cout << "fish #" << i + 1 << ": ";
        }
    }

    double total = 0.0;
    for (int j =0; j < i; j++) {
        total += fish[j];
    }

    if (i == 0){
        cout << "No fish\n";
    }else{
        cout << total / i << " = average wight of " << i << " fish\n";
    }
    cout << "Done.\n";
    return 0;
}