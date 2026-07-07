#include<iostream>
using namespace std;
float power(int a,int b){
    if(b==1) return a;
    if(b%2==0) return power(a,b/2)*power(a,b/2);
    else return power(a,b/2)*power(a,b/2)*a;
}
int main(){
    int a=2;
    int b=9;
    int x= power(a,b);
    cout<<x;
    return 0;
}  