#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter number upto sesries  has to be printed :";
    cin>>n;
    int a=1;
    int b=0;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum = a+b;
        a=b;
        b=sum;
        cout<<i<<"th fibonaci number is "<<sum<<endl;
    }
    return 0;
}