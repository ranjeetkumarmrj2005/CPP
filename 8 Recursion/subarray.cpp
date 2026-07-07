#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void subarray(vector<vector<int>>&finalAns,vector<int>Ans,vector<int>nums,int idx){
    if(idx==nums.size()){
        finalAns.push_back(Ans);
        return;
    }
subarray(finalAns,Ans,nums,idx+1);
if(Ans.size()==0||nums[idx-1]==Ans[Ans.size()-1]){
Ans.push_back(nums[idx]);
subarray(finalAns,Ans,nums,idx+1);
}
}
int main(){
vector<int>nums={2,2,2,2,5,5,5,8};
vector<int>Ans;
vector<vector<int>>finalAns;
subarray(finalAns,Ans,nums,0);
for(int i=0;i<finalAns.size();i++){
    for(int j=0;j<finalAns[i].size();j++){
        cout<<finalAns[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}