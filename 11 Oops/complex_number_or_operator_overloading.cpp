#include <iostream>
using namespace std;

class ComplexNumber {
public:
    int realpart;
    int imaginarypart;

    void display(){
        cout<<realpart<<" "<<"+"<<" "<<"i"<<imaginarypart;
    }
};

int main(){
    ComplexNumber ComplexNumber1;
    ComplexNumber1.realpart=2;
    ComplexNumber1.imaginarypart=3;

    ComplexNumber ComplexNumber2;
    ComplexNumber2.realpart=4;
    ComplexNumber2.imaginarypart=5;

    ComplexNumber ComplexNumber3;
    ComplexNumber3.realpart=ComplexNumber1.realpart+ComplexNumber2.realpart;
    ComplexNumber3.imaginarypart=ComplexNumber1.imaginarypart+ComplexNumber2.imaginarypart;

    ComplexNumber3.display();

   return 0;
}