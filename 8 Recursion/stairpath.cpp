#include<iostream>
using namespace std;
int stairpath(int n){
if(n==1||n==2||n==3) return n;
else return  stairpath(n-1)+stairpath(n-2)+stairpath(n-3);
}  
int main(){
   int n=6;
   int x=stairpath(n);
   cout<<x;
   return 0;
}