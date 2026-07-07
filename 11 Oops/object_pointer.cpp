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
void change(Cricketer* c){
    (*c).avg=77.02; //c->avg=77.02;

}
int main(){
    Cricketer c1("Sachin Tendulkar", 10000,52.01);
    Cricketer c2("virat kohali",15000,37.25); 
    change(&c1);
    Cricketer* p1=&c1;
    cout<<p1->runs;
   // cout<<c1.avg;
    return 0;
}