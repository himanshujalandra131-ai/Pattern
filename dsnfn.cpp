#include<iostream>
using namespace std;
int factn(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}
int ncr(int n , int r){
    int fact_n=factn(n);
    int fact_r=factn(r);
    int fact_rmn=factn(n-r);
    return fact_n/(fact_r*fact_rmn);
}
int main(){
int n=6; int r=3;
cout<<ncr(6,3);
return 0;
}