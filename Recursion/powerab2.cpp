#include<iostream>
using namespace std;
float power(int a,int b){
    if(b==0) return 1;
    int x= power(a,b/2);
    if(b%2==0) return x*x;
    else return x*x*a;

}
int main(){
    int a=2;
    int b=9;
    int x= power(a,b);
    cout<<x;
    return 0;
}  