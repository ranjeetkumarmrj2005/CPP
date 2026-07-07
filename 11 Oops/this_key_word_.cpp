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

    void print(){
        cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
    }

    int matches(){
        return runs/avg;
    }
};

int main(){
    Cricketer c1("Sachin Tendulkar", 10000,52.01);
    Cricketer c2("virat kohali",15000,37.25); 
    c1.print();
    c2.print();
    cout<<c1.matches()<<endl;
    cout<<c2.matches()<<endl;

    return 0;
}