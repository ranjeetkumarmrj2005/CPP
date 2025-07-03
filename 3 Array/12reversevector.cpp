#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v1;
    int n;
    cout<<" Enter size :";
    cin>>n;
    cout<<"Enter element : ";
    
   for(int i=0;i<n;i++){
    int q;
    cin>>q;
    v1.push_back(q);
   }
   display(v1);
   vector<int>v2(v1.size());
   for(int i=0;i<v2.size();i++){
    int j=v1.size()-1-i;
     v2[i]=v1[j];
   }
  display(v2);
    return 0;
}