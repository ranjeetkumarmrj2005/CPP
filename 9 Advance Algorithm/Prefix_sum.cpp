#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,1,1,1,2,2,2,3,3,4};
    int n=v.size();
    vector<int>prefixsum(n);
    prefixsum[0]=v[0];
    for(int i=1;i<n;i++){
        prefixsum[i]=prefixsum[i-1]+v[i];
    }
    for(int i=0;i<n;i++){
    cout<<prefixsum[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
    if(prefixsum[i]==prefixsum[n-1]/2) cout<<i;
    }
    return 0;
}
