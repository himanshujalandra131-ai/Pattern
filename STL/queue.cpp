#include<iostream>
#include<queue>
using namespace std;
void Queue(){
    queue<int>Q;
    Q.push(5);
    Q.push(6);
    Q.push(2);
    Q.pop();
    Q.back()+=5;
    cout<<Q.back();
}


int main(){
    Queue();

return 0;
}