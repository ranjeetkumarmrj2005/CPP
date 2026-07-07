#include<iostream>
using namespace std;
int reverse(int count,int n){
if(n==0) return count;
else if(n%2==0) return reverse(count+1 ,n/2);
else return reverse(count+1,n-1);
}  
int main(){
   int n=14;
   int count=0;
   int x=reverse(count,n);
   cout<<x;
   return 0;
}
