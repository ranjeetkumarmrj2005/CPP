#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int>nums={1,2,-1,5,-9,3,1,-4,1,2,-7};
 int n=nums.size();
 int i=0;
 int j=n-1;
 while(i<j){
 if(nums[i]<0) i++;
 if(nums[j]>0) j--;
 if(i>j) break;
 if(nums[i]>0&&nums[j]<0){
    int temp=nums[i];
    nums[i]=nums[j];
    nums[j]=temp;
    i++;
    j--;
 }
}
 for(int i=0;i<n;i++){
     cout<<nums[i]<<" ";
 }
 return 0;
}