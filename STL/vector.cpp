#include<iostream>
#include<vector>
#include<list>
using namespace std;
void vectoro(vector<int>v){
    v={2,3,4,5,6};
    v.erase(v.begin()+1);
    v.push_back(5);
    v.insert(v.begin()+1,2,10);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";

    }
}
void listw(list<int>l){
    l={22,33,44,55,6};
    l.push_front(23);
    for(int x: l){
      cout<<x<<" ";
    }
}
int main(){
    // vector<int>v;
//    vectoro(v);

list<int>l;
listw(l);
    
return 0;
}