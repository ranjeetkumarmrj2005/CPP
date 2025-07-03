#include<iostream>
using namespace std;
int  firstlast( int p){
    int t=0;
    while(p>0){
    int l=p%10;
    p=p/10;
    t=l;
    }
    return t;
}
int main(){
int n;
cout<<"Enter number : " ;
cin>>n;
cout<<firstlast( n);

    return 0;
}