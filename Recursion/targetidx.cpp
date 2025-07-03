#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int  index(vector<int>v,int target,int idx){
    if(idx==v.size()) return -1;
    if( v[idx]==target) return idx;
    else return index(v,target,idx+1);
}
int main(){
vector<int>v={9,2,3,4,5,6,7,8,-11};
int target=9;
cout<<index(v,target,0);
return 0;
}