#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
  int x;
  vector<int>v={7,1 ,2 ,3, 6, 5, 4};
  int n=v.size();
  int i,j,idx;
  for( i=0;i<n-1;i++){
    int min=INT_MAX;
    for( j=i;j<n;j++){
      if(min>v[j]){
      min=v[j];
      idx=j;
      }
    }
    int temp=v[i];
    v[i]=v[idx];
    v[idx]=temp;
  }
  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }
}