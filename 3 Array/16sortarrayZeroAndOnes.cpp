#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int>nums={0,0,0,0,1,0,1,1,0,1,1,1};
 int n=nums.size();
 int noo=0;
 int noz=0;
 for(int i=0;i<n;i++){
 if(nums[i]==0) noz++;
 else noo++;
 }
 for(int i=0;i<n;i++){
    if(i<noz) nums[i]=0;
    else nums[i]=1;
 }
 for(int i=0;i<n;i++){
     cout<<nums[i]<<" ";
 }
 return 0;
}