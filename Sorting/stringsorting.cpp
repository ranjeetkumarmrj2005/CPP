#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<char>v;
string s="AZYZXBDJKX";
int m=s.size();
for(int k=0;k<m;k++){
if(s[k]>='X') v.push_back(s[k]);
}
int n=v.size();
for(int i=0;i<n-1;i++){
bool flag=true;
for(int j=0;j<n-1-i;j++){
    if(v[j]>v[j+1]){
    swap(v[j],v[j+1]);
    flag =false;
    }
}
if(flag==true) break;
}
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
}