#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int>nums={1,1,0,0,1,0,1,1,0,1,0,1};
 int n=nums.size();
 int i=0;
 int j=n-1;
 while(i<j){
 if(nums[i]==0) i++;
 if(nums[j]==1) j--;
 if(i>j) break;
 if(nums[i]==1&&nums[j]==0){
    nums[i]=0;
    nums[j]=1;
    i++;
    j--;
 }
}
 for(int i=0;i<n;i++){
     cout<<nums[i]<<" ";
 }
 return 0;
}