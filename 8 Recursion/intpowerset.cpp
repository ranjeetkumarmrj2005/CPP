#include<iostream>
#include<string>
#include<vector>
using namespace std;
void powerset(vector<int>&v,vector<int>u,int idx){
if(idx==v.size()){
    for(int i=0;i<u.size();i++){
        cout<<u[i]<<" ";
    }
    cout<<endl;
return;
}
powerset(v,u,idx+1);
u.push_back(v[idx]);
powerset(v,u,idx+1);
}
int main(){
vector<int>v={1,2,3};
vector<int>u;
powerset(v,u,0);
return 0;
}