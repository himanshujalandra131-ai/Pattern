#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=1; i<=n; i++){
        // Number
        for(int j=1; j<=i;j++){
            cout<<j;
        }

        
        // Space
        for(int j=1; j<=n*2-i*2; j++ ){
            cout<<" ";
        }
        // Number
        for(int j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
int n;
cin>>n;
pattern(n);
return 0;
}