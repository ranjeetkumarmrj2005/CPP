   #include<iostream>
   #include<vector>
   //#include<algorithm>
   using namespace std;
              void reverse(vector<int> &nums,int start,int end){
                for(int i=start,j=end;i<j;i++,j--){
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                   }
             }
        void rotate(vector<int>& nums, int k) {
            int n=nums.size();
            k=k%n;
            reverse(nums,0,n-1);
            reverse(nums,0,k-1);
            reverse(nums,k,n-1);
        }
  
int main(){
    int k;
    cout<<"Enter the number :";
    cin>>k;
    vector<int>nums={1,2,3,4,5,6,7};
    rotate( nums,k);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}