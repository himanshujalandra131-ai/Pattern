#include<iostream>
using namespace std;
void Pattern(int n){
    int start=1;
    for(int i=1; i<=n; i++){
        
        for(int j=0; j<i; j++){
            
            cout<<start+j;
          
        }
        start=start+i;
        cout<<endl;
    }
}
int main(){
    int n; 
    cin>>n;
    Pattern(n);

return 0;
}