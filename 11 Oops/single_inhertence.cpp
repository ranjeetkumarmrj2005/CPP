#include<iostream>
#include<cmath>
using namespace std;

class scooty{ // parent class;
    public:
    string name;
    int topspeed;;
    float mileage;
private:
    int bootspace;
};
class bike: public scooty{ // child class; or derived class;
    public:
    int gears;
};
int main(){
    bike b1;
    b1.gears=4;
    b1.name="honda";
    b1.topspeed=120;
    b1.mileage=45.5;
    b1.bootspace=12;// error
    return 0;
} 