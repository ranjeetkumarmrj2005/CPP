#include<iostream>
using namespace std;
bool power(int n){
if(n==1) return true;
else return  n%2==0 ? power(n/2):false;
}  
int main(){
   int n=3;
   bool flag=power(n);
   cout<<flag;
   return 0;
}