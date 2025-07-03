// Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4   Output 1: 6  
#include<iostream>
#include<vector>
using namespace std;
vector<int> locfoc(vector<int>&v,vector<int>&u,int target){
int n=v.size();    
int low=0;
int high=n-1;
while(low<=high){
    int mid=low + (high-low)/2;
    if(v[mid]==target){
        if(mid==0||v[mid-1]!=target){
            u[0]=mid;
            break;
        }
        else high=mid-1;
    }
    else if(v[mid]<target) low=mid+1;
    else  high=mid-1;
}
low=0;
high=n-1;
while(low<=high){
    int mid=low + (high-low)/2;
    if(v[mid]==target){
        if(mid==n-1||v[mid+1]!=target) {
           u[1]=mid;
           break;
        }
        else low=mid+1;
    }
    else if(v[mid]<target) low=mid+1;
    else  high=mid-1;
}
return u;
}
int main(){
vector<int>v={1,2,3,3,4,4,4,5};
vector<int>u={-1,-1};
int n=v.size();
int target=3;
vector<int> x=locfoc(v,u,target);
cout<<u[0]<<" "<<u[1];
return 0;
}