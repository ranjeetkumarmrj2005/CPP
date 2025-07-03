#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    int a=0;
    while(n>0){
         int b=n%10;
         if(b%2==0){
        a=a+b;
         }
         n=n/10;
    }
    cout<<a;
    return 0;
}