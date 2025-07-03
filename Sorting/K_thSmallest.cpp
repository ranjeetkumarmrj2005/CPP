#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int partition(vector<int>&v,int si,int ei){
    int pe=v[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(v[i]<=pe) count++;
    }
    int pi=si+count;
    swap(v[(si+ei)/2],v[pi]);
    int i=si;
    int j=ei;
    while(i<pi&&j>pi){
        if(v[i]<=pe) i++;
        else if(v[j]>=pe) j--;
        else{
        swap(v[i],v[j]);
        i++;
        j--;
    }
}
return pi;
}
int  kthsmallest(vector<int>&v,int si,int ei,int k){
    int pi=partition(v,si,ei);
    if(pi==k-1) return v[pi];
    else if (pi<k-1) return kthsmallest(v,pi+1,ei,k);
    else  return kthsmallest(v,si,pi-1,k);     

}
int main(){
vector<int>v={2,8,6,-1,0,9};
int n=v.size();
int k=3;
cout<<kthsmallest(v,0,n-1,k);
// for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
// }
return 0;
}