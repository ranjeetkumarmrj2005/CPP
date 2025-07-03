#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>v={71,1,2,5,18,4,9,31,1};
    int n=v.size(), k=4;
    int prevsum=0;
    int maxidx=0;
    for(int l=0;l<k;l++) prevsum+=v[l];
    int maxsum=prevsum;
    int i=1;
    int j=k;
    while(j<n){
        int currsum=prevsum-v[i-1]+v[j];
        if(currsum>maxsum) {
           maxsum=currsum;
           maxidx=i;
        }
       prevsum=currsum;
       i++;
       j++;
    }
    cout<<maxsum<<" "<<maxidx;
    return 0;
}
