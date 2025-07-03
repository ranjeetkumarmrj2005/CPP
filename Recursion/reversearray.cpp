#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void  reversearr(vector<int>&v,int i,int j){
    if(j<i){
    for(int num:v){
        cout<<num<<" ";
    }
    return;
    } 
    swap(v[i],v[j]);
    reversearr(v,i+1,j-1);
}
int main(){
vector<int>v={9,2,3,4,5,6,7,8,1};
int n=v.size();
reversearr(v,0,n-1);
return 0;
}