#include<iostream>
#include<vector>
using namespace std;
int pro(vector<int>&nums,int k){
        int n=nums.size();
        int i=0;
        int j=0;
        long long product=1;
        int count=0;
        while(i<n){
            product=product*nums[j];
            if(product<k){
                count++;
                j++;
            }
            else {
                i++;
                j=i;
                product=1;
            }
            if(j==n){
                i++;
                j=i;
                product=1;
            }
        }
        return count;
    }
int main(){
    vector<int>nums={1,2,3};
    int k=0;
    int x=pro(nums,k);
    cout<<x;
    return 0;
}
