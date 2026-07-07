#include <iostream>
#include<stack>
using namespace std;

int main(){
  int arr[]={100,80,60,81,70,60,75,85};
  int n=sizeof(arr)/sizeof(int);
  int PGIdx[n];
  stack<int>st;
  st.push(0);
  PGIdx[0]=-1;
  for(int i=1;i<n;i++){
    while(st.size()>0 && arr[st.top()]<=arr[i]){
      st.pop();
    }
    if(st.size()==0) PGIdx[i]=-1;
    else PGIdx[i]=st.top();
    st.push(i);
  }
  for(int i=0;i<n;i++){
    cout<<PGIdx[i]<<" ";
  }
  cout<<endl;
  for(int i=0;i<n;i++){
    cout<<i-PGIdx[i]<<" ";
  }
  cout<<endl;
  return 0;
}