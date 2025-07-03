#include<iostream>
using namespace std;
int main(){
    float y;
    cout<<"take input :";
    cin>>y;
    int x=(int)y;
    if(y<0) {
    x-=1;
    cout<<"fractional part is :"<<(y-x);
    }
    else{
        cout<<y-x;
    }
    return 0;
}