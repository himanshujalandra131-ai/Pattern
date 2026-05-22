#include<iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter your letter" << endl;
    cin >> ch;

    if(ch >= 65 && ch <= 90) {
        cout << "lower case" << endl;
    }
    else {
        cout << "uppercase" << endl;
    }

    return 0;
}