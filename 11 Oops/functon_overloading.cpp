#include<iostream>
#include<cmath>
using namespace std;

class loading{
    public:
    void sum(string a,string b){
        cout<<a+b<<endl;
    }
    void sum(int a,int b){ 
        cout<<a+b<<endl;
    }
     void sum(int a,int b,int c){ 
        cout<<a+b+c<<endl;
    }
};

int main(){
    loading a;
    a.sum(10,20);
    a.sum("hello ","world");
    a.sum(10,20,30);

    return 0;
}