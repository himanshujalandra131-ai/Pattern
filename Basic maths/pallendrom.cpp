#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int dup=n;//becuase we perform an opration with n and n is become 0
int revers=0;
while (n>0)
{
    int ld=n%10;
    revers=(revers*10)+ld;
    n=n/10;
    
}
cout<<revers<<endl;
if(dup==revers){
    cout<<true;
}
else{
    cout<<false;
}

return 0;
}