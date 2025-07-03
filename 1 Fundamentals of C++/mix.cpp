#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    int nst=1;
    int mdl=n;
    int nsp=2*n-3;
    for(int i=1;i<=2*n;i++){
        for(int j=1;j<=nst;j++){
           cout<<"*";
        }
        for(int k=1;k<=nsp;k++){
           cout<<" ";
        }
        for(int j=1;j<=nst;j++){
            cout<<"*";
           
        }
        cout<<endl;
        if(i>n-1&&i<=n+1){
            for(int i=1;i<=2*n-1;i++){
                cout<<" *";
            }
        }
        else{
        nsp-=2;
        nst++;
        }
    }
    
    return 0;
}