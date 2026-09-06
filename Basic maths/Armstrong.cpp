#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
  int count=(int)(log10(n)+1);
  int dp=n;
  int sum=0;
  while (n>0)
  {
    int ld=n%10;
    int power=1;
    for(int i=0; i<count; i++){
      power*=ld;
    }
    sum+=power;
    n=n/10;
  }
  if(dp==sum) cout<<"this is Armstrong"<<endl;
  else cout<<"this isn't Armstrong"<<endl;
  
return 0;
}