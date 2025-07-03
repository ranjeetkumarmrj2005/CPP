#include<iostream>
using namespace std;
void swap( int* p1,int* p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main(){
int x=3,y=4;
int* t1=&x;
int* t2=&y;
swap(t1,t2); 
cout<<x<<" "<<y;
    return 0;
}