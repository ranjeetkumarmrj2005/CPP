#include<iostream>
#include<vector>
using namespace std;
int findPivotIndex(vector<int>& nums,int target) {
    int low = 0, high = nums.size() - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] > nums[high]) {
            // Pivot is in the right half
            low = mid + 1;
        } else {
            // Pivot is in the left half (including mid)
            high = mid;
        }
    }
    return low; // low == high is the pivot index
}

int main(){
vector<int>nums={8,9,10,11,12,0,1,5};
int target=0;
int n=nums.size();
int pivotidx=findPivotIndex(nums,target);
if(target>=nums[pivotidx]&&target<=nums[n-1]){
     int low=pivotidx;
     int high=n-1;
     while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target) {
        cout<<"target index is : "<<mid;
        return 0;
        }
        else if(nums[mid]<target) low=mid+1;
        else high=mid-1;
     }
}
else{
     int low=0;
     int high=pivotidx-1;
     while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target) {
        cout<<"target index is : "<<mid;
        return 0;
        }
        else if(nums[mid]<target) low=mid+1;
        else high=mid-1;
     }
}
cout<<"element is not present : "<<-1;
return 0;
}