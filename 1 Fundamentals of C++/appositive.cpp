#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    int a=0;
    for(int i=2;i<=n-1;i++){
        int d= n%i;
        if(d==0){
             a=1;
        break;
        }
    }
    if(a==1){
        cout<<" Number is composit";
    }
    else{
    cout<<" Number is prime";
    }
    return 0;
}