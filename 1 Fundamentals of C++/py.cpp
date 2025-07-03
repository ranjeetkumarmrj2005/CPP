#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    int nst=1;
    int mdl=n;
    int nsp=n-1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=nsp;j++){
           cout<<" ";
        }
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        cout<<endl;
        if(i<mdl){
            nst+=2;
            nsp--;
        }
        else{
            nst-=2;
            nsp++;
        }
    }
    return 0;
}