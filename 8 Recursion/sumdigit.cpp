#include<iostream>
using namespace std;
int sumdigit(int n){
if(n<10) return n;
else return n%10+sumdigit(n/10);
}  
int main(){
   int n=147;
   int x=sumdigit(n);
   cout<<x;
   return 0;
}