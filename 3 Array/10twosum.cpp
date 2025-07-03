#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int target;
    cout<<"Enter target number :";
    cin>>target;
    vector<int>v;
    int n;
    cout<<"Enter size : ";
    cin>>n;
    cout<<"Enter array size :";
    for(int i=0;i<n;i++){
      int q;
      cin>>q;
      v.push_back(q);
    }
    for(int i=0;i<v.size()-1;i++){
      for(int j=i+1;j<v.size();j++){
    if(v[i]+v[j]==target){
      cout<<"("<<i<<","<<j<<")"<<endl;
    }
  }
}
 return 0;
} 