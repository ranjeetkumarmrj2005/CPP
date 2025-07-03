#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>v={7,1,2,5,18,4,9,3,1};
    int n=v.size();
    int k=3;
    int maxsum=INT_MIN;
    int maxidx=-1;
    for(int i=0;i<=n-k;i++){ 
        int sum=0;
        for(int j=i;j<k+i;j++){
           sum+=v[j]; 
        }
        if(sum>maxsum){
            maxsum=sum;
            maxidx=i;
        }
    }
    cout<<maxsum<<" "<<maxidx;
    return 0;
}
