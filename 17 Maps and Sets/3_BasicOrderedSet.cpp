#include<iostream>
#include<map>
#include<set>

using namespace std;
int main(){
    set<int>s;
    s.insert(5);
    s.insert(-1);
    s.insert(5);
    s.insert(8);
    s.insert(-3);
    s.insert(11);

    for(auto x: s){
        cout<<x<<" ";
    }
    return 0;
} 