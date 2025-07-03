#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void helper(vector<vector<int>>&finalAns,vector<int>Ans,vector<int>nums,int idx){
    if(idx==nums.size()){
        finalAns.push_back(Ans);
        return;
    }
helper(finalAns,Ans,nums,idx+1);
Ans.push_back(nums[idx]);
helper(finalAns,Ans,nums,idx+1);
}
int main(){
vector<int>nums={1,2,3};
vector<int>Ans;
vector<vector<int>>finalAns;
helper(finalAns,{},nums,0);
for(int i=0;i<finalAns.size();i++){
    for(int j=0;j<finalAns[i].size();j++){
        cout<<finalAns[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}