#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int HCF(int a,int b){
    if(a==0) return b;
    else return HCF(b%a,a);
}
int main(){
int a=27;
int b=18;
int x=HCF(a,b);
cout<<x;
return 0;
}