#include<iostream>
#include<map>
#include<set>

using namespace std;
int main(){
    map<int,int>mp;
    mp[1]=10;
    mp[3]=30;
    mp[2]=20;
    for(auto x: mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
} 