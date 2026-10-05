#include <iostream>
using namespace std;

class Cricketer {
public:
    string country;
    int age;
    float avg;
    int runs;
};
int main(){

    Cricketer Virat={"india", 34, 55.4, 12000};
    Cricketer Rohit={"india", 35, 50.2, 9000};

    Cricketer players[2] = {Virat, Rohit};
    for(int i=0;i<2;i++){
        cout<<players[i].country<<" "<<players[i].age<<" "<<players[i].avg<<" "<<players[i].runs<<endl;
    }
    return 0;
}