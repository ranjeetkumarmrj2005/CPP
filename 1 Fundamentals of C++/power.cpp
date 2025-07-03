#include<iostream>
using namespace std ;
int main(){
    int n,m,result=1;
    cout<<"Enter number  :";
    cin>>n>>m;
    for(int i=1;i<=m;i++){
       result*=n;
    }
    cout<<result;
    return 0;
}