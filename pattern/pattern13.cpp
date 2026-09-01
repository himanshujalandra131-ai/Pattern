#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=0; i<n; i++){
        // space
        for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }
        char ch='A';
        int breakp=(2*i+1)/2;
        // character
        for(int j=1; j<=2*i+1; j++){
            cout<<ch;
            if(j<=breakp)ch++;
            else ch--;

        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern(n);;

return 0;
}