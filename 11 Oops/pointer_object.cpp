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
    Cricketer c1("Sachin Tendulkar", 10000,52.01);
    Cricketer c2("virat kohali",15000,37.25); 
    Cricketer*p1=&c1;
    cout<<(*p1).name<<endl;//c1.namae;
    (*p1).avg=77.45;
    cout<<(*p1).avg<<endl;
    return 0;
}