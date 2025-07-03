#include<iostream>
using namespace std;
int main(){
int x=5;
int y=7;
int* ptr1=&x;
int* ptr2=&y;
int result= *ptr1 * *ptr2;
cout<<result<<endl;
// cout<<ptr<<endl;
// cout<<p<<endl;
// cout<<**p;
// cout<<&x<<endl;
// cout<<ptr<<endl;
// cout<<*p<<endl;
    return 0;
}