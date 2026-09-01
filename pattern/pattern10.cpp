#include<iostream>
using namespace std;
void Pattern(int n){
    
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<='A'+i; ch++){
            cout<<ch;
            
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    Pattern(n);

return 0;
}