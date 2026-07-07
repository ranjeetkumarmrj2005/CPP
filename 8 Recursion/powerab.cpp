#include<iostream>
using namespace std;
float power(int a,int b){
    if(b==0) return 1;
    if(b>0) return a*power(a,b-1);
    else return 1/(power(a,-b));
}
int main(){
    int a=2;
    int b=-2;
    float x= power(a,b);
    cout<<x;
    return 0;
}