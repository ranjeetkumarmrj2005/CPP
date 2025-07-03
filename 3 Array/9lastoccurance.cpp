#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x;
    bool flag=false;
    int idx=0;
    cout<<"Enter number :";
    cin>>x;
    vector<int>v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(8);
    v.push_back(4);
    v.push_back(5);
    v.push_back(3);
    for(int i=v.size()-1;i>=0;i--){
      if(v[i]==x){
        flag=true;
       idx=i;
       break;
      }
    }
    if(flag==true){
        cout<<"Last occurance is :"<<idx;
    }
    else{
        cout<<"Number is not present in vector";
    }
 return 0;
} 