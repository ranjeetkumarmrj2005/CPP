#include<iostream>
using namespace std;
void startriangle( int x){
    for(int j=1;j<=x;j++){
        for(int k=1;k<=j;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return ;
}

int main(){
    startriangle(3);
    startriangle(4);
    startriangle(5);
    return 0;
}