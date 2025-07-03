#include<iostream>
using namespace std;
int main(){
int x=3; 
int* p1=&x;
cout<<&x<<endl; 
cout<<*p1<<endl;
int y=3;
int* p2=&y;
cout<<p2<<endl<<&y<<endl;
cout<<*p2<<endl;
*p2=6;
cout<<y<<endl;
cout<<*p1 + *p2<<endl;
int z;
int* p3=&z;
cout<<"Enter number : ";
cin>>*p3;
    return 0;
}