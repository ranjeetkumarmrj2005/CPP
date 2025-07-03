#include<iostream>
using namespace std;
int reverse(int t,int n){
if(n==0) return t;
return reverse(t=(t*10+n%10),n/10);
}  
int main(){
   int n=147;
   int t=0;
   int x=reverse(t,n);
   cout<<x;
   return 0;
}