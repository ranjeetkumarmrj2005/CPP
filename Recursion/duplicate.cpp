#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int duplicate=0;
        vector<int>v(n+1,0);
        for(int i=0;i<n+1;i++){
            if(v[nums[i]]==0) v[nums[i]]=1;
            else duplicate=nums[i];
        }
        return duplicate;
    }
int main(){
vector<int>nums = {1,3,4,2,4};
int x=findDuplicate(nums);
cout<<x;
return 0;
}