#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>v={7,1,2,5,18,4,9,31,1};
    int n=v.size(),k=3;
    int maxsum=INT_MIN;
    int maxidx=0;
    int sum=0;
    for(int l=0;l<k;l++) sum+=v[l];
    maxsum=sum;
    int i=1;
    int j=k;
    while(j<n){
        sum=sum-v[i-1]+v[j];
        if(sum>maxsum) {
           maxsum=sum;
           maxidx=i;
        }
       i++;
       j++;
    }
    cout<<maxsum<<" "<<maxidx;
    return 0;
}
