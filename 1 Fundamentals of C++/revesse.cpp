#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    int b=0;
    int r=0;
    while(n>0){
        r =r*10;
         int b=n%10;
         r=r+b;
         n=n/10;
     
    }
    cout<<r;
    return 0;
}