#include<iostream>
#include<cmath>
using namespace std;

class Cricketer{
    public:
    string name;
    int runs;
    float avg;

    Cricketer(string name,int runs,float avg){ 
        this->name =name;
        this->runs = runs;
        this->avg=avg;
    }
};
int main(){
    Cricketer c2("virat kohali",15000,37.25); 
    Cricketer* c1=new Cricketer("Sachin Tendulkar", 10000,52.01);
    int* ptr=new int(10);
    cout<<c1->name<<endl;
    return 0;
} 