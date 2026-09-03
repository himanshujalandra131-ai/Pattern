#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void PQ(){
    vector<int> arr={23,11,24,50};
    priority_queue<int>newarr;
    for(int i=0; i<arr.size(); i++){
        newarr.push(arr[i]);
    }
    // cout<<newarr.top();
    while (!newarr.empty())
    {
        cout<<newarr.top()<<" ";
        newarr.pop();
    }
    
}
int main(){
  PQ();
return 0;
}