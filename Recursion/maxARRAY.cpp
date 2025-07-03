#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v,int idx,int mx){
    if(idx==v.size()){
    cout<<mx;
    return ;
    }
    mx=max(mx,v[idx]);
    display(v,idx+1,mx);
}
int main(){
vector<int>v={1,2,3,4,9,6,7,8,5};
int idx=0;
int mx=-1;
display(v,idx,mx);
return 0;
}