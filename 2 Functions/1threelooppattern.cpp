#include<iostream>
using namespace std;
int main(){
    int n;
    int a;
    cout<<"Enter number : ";
    cin>>n;
    for( int i=1;i<=n;i++){
         cin>>a;
         for(int j=1;j<=a;j++){
            for(int k=1;k<=j;k++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    return 0;
}