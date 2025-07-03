#include<iostream>
using namespace std;
int factorial( int x){
    int fact=1;
    for(int j=1;j<=x;j++){
        fact=fact*j;
        }
    return fact ;
}
int combination( int i,int j){
    int ncr=factorial(i)/(factorial(j)*factorial(i-j));
    return ncr;
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            int ncr=combination(i,j);
            cout<<ncr<<" ";
        }
        cout<<endl;
    }
    return 0;
}