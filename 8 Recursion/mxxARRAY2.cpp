#include<iostream>
#include<vector>
using namespace std;
int  display(vector<int>&v,int idx,int mx){
    if(idx==v.size()) return mx;
    mx=max(mx,v[idx]);
    return display(v,idx+1,mx);
}
int main(){
vector<int>v={1,2,3,4,9,6,7,8,5};
int idx=0;
int mx=-1;
int x=display(v,idx,mx);
cout<<x;
return 0;
}