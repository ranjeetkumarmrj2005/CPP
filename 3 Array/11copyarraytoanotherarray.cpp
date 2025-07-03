#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<" Enter size :";
    cin>>n;
    cout<<"Enter element : ";
    
   for(int i=0;i<n;i++){
    int q;
    cin>>q;
    v.push_back(q);
   }
   vector<int>u(n);
   for(int i=0,j=n-1;i<n,j>=0;i++,j--){
    int temp=v[i];
    u[i]=v[j];
    v[j]=temp;
   }
   for(int k=0;k<n;k++){
    cout<<u[k]<<" ";
   }
    return 0;
}