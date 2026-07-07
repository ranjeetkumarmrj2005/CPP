#include<iostream>
#include<vector>
using namespace std;
int firstoccurance(vector<int>&v){
int n=v.size();
int target=8;
int low=0;
int high=n-1;
while(low<=high){
int mid=low+(high-low)/2;
if(v[mid]==target) {
    if(v[mid-1]!=target) return mid;
    else high=mid-1;
}
else if(v[mid]<target) low=mid+1;
else high=mid-1;
}
return v[low];
}
int main(){
vector<int>v={1,2,3,4,4,4,4,4,4,6,7};
int x=firstoccurance(v);
cout<<x;
}