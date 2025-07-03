// Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]  // Output 1: 2
#include<iostream>
#include<vector>
using namespace std;
int loc(vector<int>&v,int target){
int n=v.size();    
int low=0;
int high=n-1;
int idx=0;
while(low<=high){
    int mid=low + (high-low)/2;
    if(v[mid]==target){
        if(mid==n-1||v[mid+1]!=target) {
           idx=mid;
           break;
        }
        else low=mid+1;
    }
    else if(v[mid]<target) low=mid+1;
    else  high=mid-1;
}
return   n-idx-1;
}
int main(){
vector<int>v={0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1};
int target=0;
int x=loc(v,target);
cout<<x;
return 0;
}