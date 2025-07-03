#include<iostream>
  #include <climits>
using namespace std;
int main(){
    int smax=INT_MIN;
    int _max=INT_MIN;
    int arr[]={1,1,1,1,1,1,1,2};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        if(_max<arr[i]){
            smax=_max;
            _max=arr[i];
        }
        else{
            smax=min(smax,arr[i]);
        }
    }
    cout<<"max is "<<_max<<endl;
    if(smax==INT_MIN) cout<<"no second max";
    else cout<<smax;
    return 0;
}