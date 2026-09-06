#include<bits/stdc++.h> //i use all those library .help of(stdc++.h)
using namespace std;

int main(){
    // this is normal solution 
 int n;
    cin>>n;
//     int lastdigit = 0;
//     int count = 0;

//     while (n > 0)
//     {
        //lastdigit = n % 10; // for last digit
        // cout<<lastdigit<<endl;//last digit print
    //     count += 1;
    //     n = n / 10; // change value of the number in divesion method
    // }
    // cout << count << endl;

    //this is optimal solution'
    // log 10 mean division or any digit by 10;
    // if i use 2 that mean any digit dived by 2;

    // int count= (int)(log10(n)+1);
    // cout<<count<<endl;
    // like this 
    int count= log2(n)+1;
    cout<<count<<endl;

return 0;
}