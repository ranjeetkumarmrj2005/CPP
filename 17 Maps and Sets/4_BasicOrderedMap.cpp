#include<iostream>
#include<map>
#include<set>

using namespace std;
int main(){
    map<int,int>mp;
    mp[1]=10;
    mp[3]=30;
    mp[2]=20;
    for(auto var: mp){
        cout<<var.first<<" "<<var.second<<endl;
    }
    return 0;
} 