#include<iostream>
using namespace std;
class A{
public:
    int a_ka_public;

    void display(){
        cout<<" aham A";
    }
protected:
    int a_ka_protected;
private:
    int a_ka_private;


};
class B:A{
public:
    int b_ka_public;
protected:
    int b_ka_protected;
private:
    int b_ka_private;
};
int main(){
     A X;
     X.display();
    
    return 0;
}