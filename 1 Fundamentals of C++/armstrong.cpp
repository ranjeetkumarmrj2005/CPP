#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    int a=n;
    int b=0;
    int r=0;
    while(n>0){
        // r =r*10;
         int b=n%10;
         int k=b*b*b;
         r=r+k;
         n=n/10;
     
    }
    if(a==r){
        cout<<"the number is armstroung";
    }
    else{
    cout<<"Not";
    }
    return 0;
} 