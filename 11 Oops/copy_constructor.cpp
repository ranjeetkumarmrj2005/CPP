#include <iostream>
using namespace std;
class Bike {
public:
    string name;
    int price;
    int tyressize;
    int mileage;
    Bike(string name,int price,int tyressize,int mileage){
        this->name = name;
        this->price = price;
        this->tyressize = tyressize;
        this->mileage = mileage;
    }
    void display(){
        cout<<name<<" "<<price<<" "<<tyressize<<" "<<mileage<<endl;
    }
    ~Bike(){
        cout<<"Destructor called for "<<name<<endl;
    }
};
int main(){

    Bike bajaj("tvs", 70000, 50, 55);
    Bike* honda=&bajaj;// Copy constructor is called here
    bajaj.display();
    honda->display();
    return 0;
}