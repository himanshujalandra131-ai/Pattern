#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int lastdigit = 0;
    int count = 0;

    while (n > 0)
    {
        //lastdigit = n % 10; // for last digit
        // cout<<lastdigit<<endl;//last digit print
        count += 1;
        n = n / 10; // change value of the number in divesion method
    }
    cout << count << endl;
    return 0;
}