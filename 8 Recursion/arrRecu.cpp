#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v,int n,int idx){
    if(idx==n) return ;
    cout<<v[idx]<<" ";
    display(v,n,idx+1);
}
int main(){
vector<int>v={1,2,3,4,5,6,7,8,9};
int n=v.size();
int idx=0;
display(v,n,idx);
return 0;
}