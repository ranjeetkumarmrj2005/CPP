#include<iostream>
#include<vector>
using namespace std;
void targetcombination(vector<int>u,vector<int>v,int target,int idx){
if(target==0){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
if(target<0) return ;
for(int i=idx;i<u.size();i++){
    v.push_back(u[i]);
    targetcombination(u,v,target-u[i],i);
    v.pop_back();
}
}
int main(){
    vector<int>u={2,3,5};
    vector<int>v;
    int target=8;
    int idx=0;
    targetcombination(u,v,target,idx);
return 0;
}