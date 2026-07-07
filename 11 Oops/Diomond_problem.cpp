#include<iostream>
using namespace std;
class A{
public:
    int a_ka_public;
protected:
    int a_ka_protected;
private:
    int a_ka_private;

};
class B:A{
public:
public:
    int b_ka_public;
protected:
    int b_ka_protected;
private:
    int b_ka_private;

};
clss C:A{
public:
public:
    int c_ka_public;
protected:
    int c_ka_protected;
private:
    int c_ka_private;

};
class D:B,C{
public:
    int d_ka_public;
protected:
    int d_ka_protected;
private:
    int d_ka_private;
};
int main(){

    
    return 0;
}