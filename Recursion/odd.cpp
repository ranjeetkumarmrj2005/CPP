#include<iostream>            
using namespace std;
int sumodd(int a,int b){
if(a>b) return 0;
else return  ((a%2!=0)?a:0)+sumodd(a+1,b);
}  
int main(){
   int a=1;
   int b=5;
   int sum=0;
   int x=sumodd(a,b);
   cout<<x;
   return 0;
}