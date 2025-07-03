#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
vector<int>v={2,8,6,7,0,9};
int n=v.size();
vector<int>v1(n,0);
int idx;
int x=0;
for(int i=0;i<n;i++){
int min=INT_MAX;
for(int j=0;j<n;j++){
    if(v1[j]==1) continue;
    else {
        if(min>v[j]){
        min=v[j];
        idx=j;
        }
    }
}
v[idx]=x;
v1[idx]=1;
x++;
}
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
}