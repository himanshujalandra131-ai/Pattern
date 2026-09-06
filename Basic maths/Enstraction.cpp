#include<iostream>
using namespace std;

int main(){
int n=7763;
int lastdigit=0;
while (n>0)
{
     lastdigit=n%10;//for last digit
    cout<<lastdigit<<endl;//last digit print

    n=n/10;//change value of the number in divesion method
}

return 0;
}