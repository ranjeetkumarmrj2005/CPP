#include<iostream>
#include<vector>
using namespace std;
int lowerbound(vector<int>&v){
int n=v.size();
int target=20;
int low=0;
int high=n-1;
while(low<=high){
int mid=low+(high-low)/2;
if(v[mid]==target) return v[mid-1];
if(v[mid]<target) low=mid+1;
if(v[mid]>target) high=mid-1;
}
return v[high];
}
int main(){
vector<int>v={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15, 16, 17, 18, 19, 20, 21};
int x=lowerbound(v);
cout<<x;
}