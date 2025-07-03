#include<iostream>
using namespace std ;
int main(){
    int a,b;
    char ch;
    cout<<"Enter problem  ";
    cin>>a>>ch>>b;
    if(ch=='+') cout<<a+b;
    if(ch=='-') cout<<a-b;
    if(ch=='*') cout<<a*b;
    if(ch=='/') cout<<a/b;
    return 0;
}