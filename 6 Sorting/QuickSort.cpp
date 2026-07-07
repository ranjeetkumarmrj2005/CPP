#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int partition(vector<int>&v,int si,int ei){
    int pe=v[si];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(v[i]<=pe) count++;
    }
    int pi=si+count;
    swap(v[si],v[pi]);
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
void quicksort(vector<int>&v,int si,int ei){
    if(si>=ei) return;
    int pi=partition(v,si,ei);
    quicksort(v,si,pi-1);
    quicksort(v,pi+1,ei);     
}
int main(){
vector<int>v={2,8,6,-1,0,9};
int n=v.size();
quicksort(v,0,n-1);
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
return 0;
}