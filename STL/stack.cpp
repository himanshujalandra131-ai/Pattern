#include<iostream>
#include<stack>
using namespace std;
// stack is stand from "LIFO" last in  firt out
void stackw(){
    stack<int>s;
    s.push(5);
    s.push(1);
    s.push(3);
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    


}
int main(){
    stackw();

return 0;
}