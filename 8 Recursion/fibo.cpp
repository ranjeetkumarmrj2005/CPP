#include<iostream>
using namespace std;
int fibo(int n){
if(n==1||n==2) return n;
else return  fibo(n-1)+fibo(n-2);
}  
int main(){
   int n=5;
   int x=fibo(n);
   cout<<x;
   return 0;
}