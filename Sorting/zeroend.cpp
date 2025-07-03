#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v={7,1,2,0,3,0,4,0,5,0,0,6,0};
int n=v.size();
for(int i=0;i<n-1;i++){
    bool flag=true;
    for(int j=0;j<n-1-i;j++){
        if(v[j]==0) {
            int temp=v[j];
            v[j]=v[j+1];
            v[j+1]=temp;
            flag=false;
        }
    }
    if(flag==true) break;
}
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";

}
}