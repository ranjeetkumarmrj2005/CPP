#include<iostream>
using namespace std;

class Car{
public:
    string name;
    int  price;
    int  seats;
    string brand;
};
void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.brand<<endl;
}
void change(Car& c){
    c.name = "Audi A8";
}
int main(){
    Car c1; // c1 is an object of class Car
    c1.name = "alto 800";
    c1.price = 79999;
    c1.seats = 5;
    c1.brand = "Tesla";

    Car c2; // c2 is another object of class Car
    c2.name = "thar";    
    c2.price = 55999;
    c2.seats = 4;
    c2.brand = "Ford";

    print(c1);
    change(c1); // This will not change the original object c1
    print(c1); // c1 remains unchanged
    return 0;
}