#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v={0,1,5,8,9,10,11,12};
int n=v.size();
int low=0;
int high=n-1;
int ans=-1;
while(low<=high){
    int mid=low + (high-low)/2;
    if(v[mid]==mid) low =mid+1;
    else{
       ans=mid;
       high=mid-1;
    }
}
cout<<ans;
}
