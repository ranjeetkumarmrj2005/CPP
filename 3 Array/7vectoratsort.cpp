#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(9);
    v.at(3)=2;
   for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
   }
   sort(v.begin(),v.end());
   cout<<endl;
   v.pop_back();
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
    return 0;
} 