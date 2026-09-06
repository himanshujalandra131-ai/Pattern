#include<iostream>
using namespace std;

int main(){
//basicly we have a digits those digits we will have to reverse those digits 
int n;
cin>>n;

int revers=0;
while (n>0)
{
    int ld=n%10;
    revers=(revers*10)+ld;
    n=n/10;
    
}
cout<<revers<<endl;

return 0;
}