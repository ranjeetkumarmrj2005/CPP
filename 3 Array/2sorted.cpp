#include<iostream>
#include <climits>
using namespace std;
int main(){
    int a=1;
    bool flag=false;
    int arr[]={-8,-6-3,1,2,3,4,5,7};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        if(arr[i]<0){
        continue;
        }
        else if ( a==arr[i]){
            a++;
            continue;
        }
        else{
           cout<<a;
        }
    }
    return 0;
}